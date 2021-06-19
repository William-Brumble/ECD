#ifndef EIP_LISTIDENTITY
#define EIP_LISTIDENTITY

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "eip_dataTypes.h"


void
request_list_identity(struct eip_header *input_structure,
                      int32_t *session_handle,
                      _Bool *send_via_broadcast,
					  int32_t *clientSocket,
					  char *send_buff);

#endif /* EIP_LISTIDENTITY */
