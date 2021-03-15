#ifndef CIP_CONTROLLER_H
#define CIP_CONTROLLER_H

/* Controls all cip related functionality. */
int cip_controller();

/* Determines if first time running. */
_Bool one_first_scan = 1;

/* Performs first time running initialization */
int four_initialize();

/* Buffers to store data slated for sending. */
char *four_send_buff_one;
char *four_send_buff_two;
char *four_send_buff_three;
char *four_send_buff_four;

/* Buffers to store data slated for receiving. */
char *four_recv_buff_one;
char *four_recv_buff_two;
char *four_recv_buff_three;
char *four_recv_buff_four;

#endif /* CIP_CONTROLLER_H */
