#ifndef SYSTEM_CONTROLLER_H
#define SYSTEM_CONTROLLER_H

/* Controls all system related functionality. */
int system_controller();

/* Determines if first time running. */
_Bool one_first_scan = 1;

/* Performs first time running initialization */
int five_initialize();

/* Buffers to store data slated for sending. */
char *five_send_buff_one;
char *five_send_buff_two;
char *five_send_buff_three;
char *five_send_buff_four;

/* Buffers to store data slated for receiving. */
char *five_recv_buff_one;
char *five_recv_buff_two;
char *five_recv_buff_three;
char *five_recv_buff_four;

#endif /* SYSTEM_CONTROLLER_H */
