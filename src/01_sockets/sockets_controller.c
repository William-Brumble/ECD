#include <stdlib.h>

#include "sockets_controller.h"
#include "tcp_server.h"

/* Determines if first time running. Set the default to true. */
//one_first_scan = 1;

/* Controls all socket related functionality. */
int
socket_controller()
{
	/* If this is the first time running, let's initialize. */
	if(one_first_scan == 1)
	{
		/* Change variable to indicate program has been ran */
		one_first_scan = 0;

		/* Perform first time running layer one initialization */
		if(one_initialize() == -1) { return -1; }
	}

	// test();

    return 0;
}

int
one_initialize()
{
	/* Buffers to store data slated for sending. */
	one_send_buff_one 	 = (char *) malloc(65535);
	if(one_send_buff_one == NULL) { return -1; }

	one_send_buff_two 	 = (char *) malloc(65535);
	if(one_send_buff_two == NULL) { return -1; }

	one_send_buff_three	 = (char *) malloc(65535);
	if(one_send_buff_three == NULL) { return -1; }

	one_send_buff_four   = (char *) malloc(65535);
	if(one_send_buff_four == NULL) { return -1; }

	/* Buffers to store data slated for receiving */
	one_recv_buff_one 	 = (char *) malloc(65535);
	if(one_recv_buff_one == NULL) { return -1; }

	one_recv_buff_two 	 = (char *) malloc(65535);
	if(one_recv_buff_one == NULL) { return -1; }

	one_recv_buff_three  = (char *) malloc(65535);
	if(one_recv_buff_one == NULL) { return -1; }

	one_recv_buff_four 	 = (char *) malloc(65535);
	if(one_recv_buff_one == NULL) { return -1; }

	return 0;
}