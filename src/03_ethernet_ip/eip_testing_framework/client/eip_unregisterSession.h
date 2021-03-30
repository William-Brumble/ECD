#ifndef EIP_UNREGISTERSESSION
#define EIP_UNREGISTERSESSION

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "eip_dataTypes.h"


void
request_unregister_session(struct eip_header *input_structure,
                           int32_t *session_handle,
                           int8_t *sender_context,
						   int32_t *clientSocket,
						   char *send_buff);

#endif /* EIP_UNREGISTERSESSION */
