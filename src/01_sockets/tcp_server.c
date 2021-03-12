#include <stdio.h>
#include <poll.h>
#include <sys/epoll.h>
#include <signal.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <limits.h>
#include <errno.h>

// ----------------- Configuration Options
#define DOMAIN AF_INET  // The domain argument specifies a communication domain.
#define TYPE SOCK_STREAM    // Specifies the communication semantics.
#define PROTOCOL 6  // Specifies a particular protocol to be used with the socket.
#define SERV_PORT 0xAF12 // Specifies port number for socket address.
#define LISTENQ 128 // Max Backlog Value. /proc/sys/net/core/somaxconn.
#define MAXLINE 4096 // Max text line length.
#define INFTIM (-1) //  Infinite poll timeout.

int test (){
    int i;  // Used as an iterator.
    int maxi = 0;   // Contains the largest index of the client array currently in use.
    int listenfd; //
    int connfd; // Used to store an accepted client.
    int sockfd; // Used to store a clients fd.
    int nready; // Used to store the number of elements in pollfds that have events or errors.
    ssize_t n; // Used to store count of bytes received from client.
    char buf[MAXLINE]; // Buffer to store incoming data.
    socklen_t clilen; // Because sockets _needs_ it's own integer type.
    struct pollfd client[FOPEN_MAX]; // Used to store all of the connections fds.
    struct sockaddr_in clienaddr; // Used to store the connected client's internet address.
    struct sockaddr_in serveraddr; // Used to store our internet address.

    // Create the TCP socket.
    listenfd = socket(AF_INET, SOCK_STREAM, 0);

    // Create the address for the TCP socket.
    bzero(&serveraddr, sizeof(serveraddr));
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = htonl(INADDR_ANY);
    serveraddr.sin_port = htons(SERV_PORT);

    // Assign the address to the TCP socket.
    bind(listenfd, (struct sockaddr *) &serveraddr, sizeof(serveraddr));

    // Setup the TCP socket for listening.
    listen(listenfd, LISTENQ);

    // Set the first element in the client array to the TCP socket.
    client[0].fd = listenfd;
    client[0].events = POLLIN;

    // Set all of the other elements in the array as available (-1).
    for(i = 1; i < FOPEN_MAX; i++)
        client[i].fd = -1;

    // Begin the infinite loop.
    for ( ;; ){

        // Get the number of fds that currently have an event.
        nready = poll(client, maxi + 1, INFTIM);

        // If we have received a new connection.
        if (client[0].revents & POLLIN){

            // Accept the connection and store inside client struct.
            clilen = sizeof(clienaddr);
            connfd = accept(listenfd, (struct sockaddr *) &clienaddr, &clilen);

            // Scan for an fds that's not being used.
            for (i = 1; i < FOPEN_MAX; i++)
                // If the fds has been set as available (-1).
                if (client[i].fd < 0) {
                    // Use this fds to store the connection.
                    client[i].fd = connfd;
                    break;
                }

            // If we have reached the end of our array quit on error.
            if (i == FOPEN_MAX)
                perror("Too many clients");
            client[i].events = POLLIN;

            // Add current client to variable storing amount of clients.
            if (i > maxi)
                maxi = i;

            // If there are no client fds ready, get out of the loop.
            if (--nready <= 0)
                continue;
        }

        // Let's iterate of every client fds and service.
        for (i = 1; i <= maxi; i++) {

            // If client has been set to availble (-1) skip.
            if ((sockfd = client[i].fd) < 0)
                continue;

            // If there is either a data or error event.
            if (client[i].revents & (POLLIN | POLLERR)) {

                // If the number of bytes read is less than 0.
                if ((n = read(sockfd, buf, MAXLINE)) < 0) {

                    // If the error equals connection reset.
                    if (errno == ECONNRESET) {
                        // Close the socket and set the fds to available.
                        close(sockfd);
                        client[i].fd = -1;

                    // Log all other errors as read error.
                    } else
                        perror("Read error");

                // If zero bytes have been read, close the socket, and set fds as available.
                } else if (n == 0) {
                    close(sockfd);
                    client[i].fd = -1;

                // Echo data back to client.
                } else
                    write(sockfd, buf, n);

                // If all clients have been serviced
                if (--nready <= 0 )
                    break;
            }
        }
    }
}
