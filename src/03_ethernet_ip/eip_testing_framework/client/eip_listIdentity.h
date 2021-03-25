#ifndef EIP_LISTIDENTITY
#define EIP_LISTIDENTITY

#include <stdint.h>
#include "eip_dataTypes.h"

void
request_list_identity(struct eip_header input_structure,
                       int32_t session_handle,
                      _Bool send_via_broadcast);

#endif /* EIP_LISTIDENTITY */