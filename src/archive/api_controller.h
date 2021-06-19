#ifndef API_CONTROLLER_H
#define API_CONTROLLER_H

/* Controls all system related functionality. */
int api_controller();

/* Determines if first time running. */
_Bool one_first_scan = 1;

/* Performs first time running initialization */
int six_initialize();

/* Buffers to store data slated for sending. */
char *six_send_buff_one;
char *six_send_buff_two;
char *six_send_buff_three;
char *six_send_buff_four;

/* Buffers to store data slated for receiving. */
char *six_recv_buff_one;
char *six_recv_buff_two;
char *six_recv_buff_three;
char *six_recv_buff_four;

#endif /* API_CONTROLLER_H */
