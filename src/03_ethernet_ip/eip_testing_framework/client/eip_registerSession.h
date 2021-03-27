#ifndef EIP_REGISTERSESSION
#define EIP_REGISTERSESSION

#include <stdint.h>
#include <stdio.h>
#include "eip_dataTypes.h"

void
request_register_session(struct eip_header input_structure,
                         int32_t session_handle,
                         int8_t sender_context[8]);

#endif /* EIP_REGISTERSESSION */
