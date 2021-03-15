#ifndef SERIAL_CONTROLLER_H
#define SERIAL_CONTROLLER_H

/* Controls all serial related functionality. */
int serial_controller();

/* Determines if first time running. */
_Bool one_first_scan = 1;

/* Performs first time running initialization */
int two_initialize();

/* Buffers to store data slated for sending. */
char *two_send_buff_one;
char *two_send_buff_two;
char *two_send_buff_three;
char *two_send_buff_four;

/* Buffers to store data slated for receiving. */
char *two_recv_buff_one;
char *two_recv_buff_two;
char *two_recv_buff_three;
char *two_recv_buff_four;

/* Buffers for sending data down from layer three to layer two. */
extern char *three_send_buff_one;
extern char *three_send_buff_two;
extern char *three_send_buff_three;
extern char *three_send_buff_four;

/* Buffers for sending data up from layer two to layer three. */
extern char *three_recv_buff_one;
extern char *three_recv_buff_two;
extern char *three_recv_buff_three;
extern char *three_recv_buff_four;

/* Receives data from layer three buffer. */
int two_pull_lyr_three_data();

/* Sends data to layer three buffers. */
int two_send_lyr_three_data();

#endif /* SERIAL_CONTROLLER_H */
