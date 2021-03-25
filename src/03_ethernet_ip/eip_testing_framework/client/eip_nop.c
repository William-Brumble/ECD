#include "eip_nop.h"

/* Does nothing, absolutely nothing */
void
send_request_nop(struct eip_header *input_structure,
            int32_t *session_handle,
            int8_t *sender_context,
            int32_t *clientSocket,
            char *send_buff)
{
    printf("Request send nop function called.\n");



    *session_handle = 0x00000033;
    input_structure->command = 0x0011;                       // Hard coded
    input_structure->length = 0x0022;                             // Hard coded
    input_structure->session_handle = *session_handle;       // Ignored by targ
    input_structure->status = 0x00000044;                             // Hard coded
    /* Sender context chosen by sender */
    for(int i = 0; i < 8; i++)
    {
        input_structure->sender_context[i] = sender_context[i];
    }
    input_structure->options = 0x00000011;                            // Hard coded




    memcpy(send_buff, (const void *)input_structure, 24);

    // -----------------------------------------------
    printf("Printing host data: \n");
    for(int i = 0; i < 24; i++)
    {
        printf("%02X ", send_buff[i]);
    }
    printf("\n");
    // -----------------------------------------------
    printf("Printing network data: \n");
    for(int i = 0; i < 24; i++)
    {
        printf("%02X ", send_buff[i]);
    }
    printf("\n");


    printf("Send request function call has finished.\n");
}