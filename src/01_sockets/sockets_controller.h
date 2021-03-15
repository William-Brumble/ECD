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

/* Buffers for sending data down from layer two to layer one. */
extern char *two_send_buff_one;
extern char *two_send_buff_two;
extern char *two_send_buff_three;
extern char *two_send_buff_four;

/* Buffers for sending data up from layer one to layer two. */
extern char *two_recv_buff_one;
extern char *two_recv_buff_two;
extern char *two_recv_buff_three;
extern char *two_recv_buff_four;

/* Receives data from layer two buffer. */
int one_pull_lyr_two_data();

/* Sends data to layer two buffers. */
int one_send_lyr_two_data();

#endif /* SOCKET_CONTROLLER_H */