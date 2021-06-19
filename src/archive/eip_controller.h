#ifndef EIP_CONTROLLER_H
#define EIP_CONTROLLER_H

/* Controls all eip related functionality. */
int eip_controller();

/* Determines if first time running. */
_Bool one_first_scan = 1;

/* Performs first time running initialization */
int three_initialize();

/* Buffers to store data slated for sending. */
char *three_send_buff_one;
char *three_send_buff_two;
char *three_send_buff_three;
char *three_send_buff_four;

/* Buffers to store data slated for receiving. */
char *three_recv_buff_one;
char *three_recv_buff_two;
char *three_recv_buff_three;
char *three_recv_buff_four;

/* Buffers for sending data down from layer four to layer three. */
extern char *four_send_buff_one;
extern char *four_send_buff_two;
extern char *four_send_buff_three;
extern char *four_send_buff_four;

/* Buffers for sending data up from layer four to layer three. */
extern char *four_recv_buff_one;
extern char *four_recv_buff_two;
extern char *four_recv_buff_three;
extern char *four_recv_buff_four;

/* Receives data from layer four buffer. */
int three_pull_lyr_four_data();

/* Sends data to layer four buffers. */
int three_send_lyr_four_data();

#endif /* EIP_CONTROLLER_H */
