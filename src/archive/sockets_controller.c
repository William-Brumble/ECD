#include <stdlib.h>

#include "sockets_controller.h"
#include "tcp_server.h"
#include "udp_server.h"

/* Controls all socket related functionality. */
int
socket_controller()
{
	/* If this is the first time running, let's initialize. */
	if(one_first_scan == 1)
	{
		/* Change variable to indicate program has been ran. */
		one_first_scan = 0;

		/* Perform first time running layer one initialization. */
		if(one_initialize() == -1) { return -1; }
	}

	/* Receives data from layer two buffers. */
	if(one_pull_lyr_two_data() == -1) { return -1; }

	/* Invoke tcp controller/functionality.  */
	if(one_tcp_controller() == -1) { return -1; }

	/* Invoke udp controller/functionality.  */
	if(one_upd_controller() == -1) { return -1; }

	/* Sends data to layer two buffers. */
	if(one_send_lyr_two_data() == -1) { return -1;}

    return 0;
}

/* Perform first time running layer one initialization. */
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

/* Receives data from layer two buffer. */
int
one_pull_lyr_two_data()
{
	memcpy(one_send_buff_one, (const)two_send_buff_one, 65535);
	memcpy(one_send_buff_two, (const)two_send_buff_two, 65535);
	memcpy(one_send_buff_three, (const)two_send_buff_three, 65535);
	memcpy(one_send_buff_four, (const)two_send_buff_four, 65535);

	return 0;
}

/* Sends data to layer two buffers. */
int
one_send_lyr_two_data()
{
	memcpy(two_recv_buff_one, (const)one_recv_buff_one, 65535);
	memcpy(two_recv_buff_one, (const)one_recv_buff_one, 65535);
	memcpy(two_recv_buff_one, (const)one_recv_buff_one, 65535);
	memcpy(two_recv_buff_one, (const)one_recv_buff_one, 65535);

	return 0;
}