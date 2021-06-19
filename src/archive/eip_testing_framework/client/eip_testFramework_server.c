#include "eip_testFramework_server.h"

#define PORT 0xaf12
#define SERVER_ADDRESS "127.0.0.1"

int32_t initialize_socket(int32_t *clientSocket)
{
    struct sockaddr_in serverAddr;
    *clientSocket = socket(PF_INET, SOCK_STREAM, 0);
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(PORT);
    serverAddr.sin_addr.s_addr = inet_addr(SERVER_ADDRESS);
    memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);
    connect(*clientSocket, (struct sockaddr *) &serverAddr, sizeof(serverAddr));
    return 0;
}


