#ifndef EIP_TESTFRAMEWORKCONTROLLER
#define EIP_TESTFRAMEWORKCONTROLLER

#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

char *send_buff; // Used to store data to send with the socket.
char *recv_buff; // Used to store data received from the socket.
int32_t our_socket; // Stores our socket.
int input_comparer; // Used to select user input command.
struct eip_header input_structure;
int32_t session_handle;
int8_t sender_context[8] = {5,6,7,8,9,8,7,6};
_Bool send_via_broadcast = 0;

#endif /* EIP_TESTFRAMEWORKCONTROLLER */
