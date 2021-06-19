#ifndef EIP_REGISTERSESSION
#define EIP_REGISTERSESSION

#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include "eip_dataTypes.h"

void
request_register_session(struct eip_header *input_structure,
                         int32_t *session_handle,
                         int8_t *sender_context,
						 int32_t *clientSocket,
						 char *send_buff);

#endif /* EIP_REGISTERSESSION */
