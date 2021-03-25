#include "eip_listServices.h"

/* The ListServices command shall determine which encapsulation service classes
 * the target device supports */
void
request_list_services(struct eip_header input_structure,
                      int32_t session_handle,
                      int8_t sender_context[8])
{
    printf("Request list services function called.\n");




    input_structure.command = 0x0004;                       // Hard coded
    input_structure.length = 0;                             // Hard coded
    input_structure.session_handle = session_handle;        // Ignored by target
    input_structure.status = 0;                             // Hard coded
    /* Sender context chosen by sender */                   //    ---
    input_structure.sender_context[0] = sender_context[0];  //     |
    input_structure.sender_context[1] = sender_context[1];  //     |
    input_structure.sender_context[2] = sender_context[2];  //     |
    input_structure.sender_context[3] = sender_context[3];  //     |
    input_structure.sender_context[4] = sender_context[4];  //     |
    input_structure.sender_context[5] = sender_context[5];  //     |
    input_structure.sender_context[6] = sender_context[6];  //     |
    input_structure.sender_context[7] = sender_context[7];  //    ---
    input_structure.options = 0;                            // Hard coded
}