#ifndef SOCKET_CONTROLLER_H
#define SOCKET_CONTROLLER_H

/* Controls all socket related functionality. */
int socket_controller();

/* Determines if first time running. */
_Bool one_first_scan = 1;

/* Performs first time running initialization */
int one_initialize();

/* Buffers to store data slated for sending. */
char *one_send_buff_one;
char *one_send_buff_two;
char *one_send_buff_three;
char *one_send_buff_four;

/* Buffers to store data slated for receiving. */
char *one_recv_buff_one;
char *one_recv_buff_two;
char *one_recv_buff_three;
char *one_recv_buff_four;

#endif /* SOCKET_CONTROLLER_H */