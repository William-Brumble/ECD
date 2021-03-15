#include "serial_controller.h"

int serial_controller()
{
	/* If this is the first time running, let's initialize. */
	if(two_first_scan == 1)
	{
		/* Change variable to indicate program has been ran */
		two_first_scan = 0;

		/* Perform first time running layer one initialization */
		if(two_initialize() == -1) { return -1; }
	}

    return 0;
}

int
two_initialize()
{
	/* Buffers to store data slated for sending. */
	two_send_buff_one 	 = (char *) malloc(65535);
	if(two_send_buff_one == NULL) { return -1; }

	two_send_buff_two 	 = (char *) malloc(65535);
	if(two_send_buff_two == NULL) { return -1; }

	two_send_buff_three	 = (char *) malloc(65535);
	if(two_send_buff_three == NULL) { return -1; }

	two_send_buff_four   = (char *) malloc(65535);
	if(two_send_buff_four == NULL) { return -1; }

	/* Buffers to store data slated for receiving */
	two_recv_buff_one 	 = (char *) malloc(65535);
	if(two_recv_buff_one == NULL) { return -1; }

	two_recv_buff_two 	 = (char *) malloc(65535);
	if(two_recv_buff_one == NULL) { return -1; }

	two_recv_buff_three  = (char *) malloc(65535);
	if(two_recv_buff_one == NULL) { return -1; }

	two_recv_buff_four 	 = (char *) malloc(65535);
	if(two_recv_buff_one == NULL) { return -1; }

	return 0;
}
