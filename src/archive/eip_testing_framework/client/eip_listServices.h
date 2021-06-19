#ifndef EIP_LISTSERVICES
#define EIP_LISTSERVICES

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "eip_dataTypes.h"

void
request_list_services(struct eip_header *input_structure,
                      int32_t *session_handle,
                      int8_t *sender_context,
					  int32_t *clientSocket,
					  char *send_buff);

#endif /* EIP_LISTSERVICES */
