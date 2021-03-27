#ifndef EIP_UNREGISTERSESSION
#define EIP_UNREGISTERSESSION

#include "eip_dataTypes.h"
#include <stdio.h>
#include <stdint.h>

void
request_unregister_session(struct eip_header input_structure,
                            int32_t session_handle,
                           int8_t sender_context[8]);

#endif /* EIP_UNREGISTERSESSION */
