#include "eip_listIdentity.h"

/* A connection originator may use the ListIdentity command to locate and
 * identify potential targets */
void
request_list_identity(struct eip_header input_structure,
                       int32_t session_handle,
                      _Bool send_via_broadcast)
{
    printf("Request list identity function called.\n");




    input_structure.command = 0x0063;                       // Hard coded
    input_structure.length = 0;                             // Hard coded
    input_structure.session_handle = session_handle;        // Ignored by target
    input_structure.status = 0;                             // Hard coded
    /* If sending via broadcast, set a random delay         //    ---
     * between 500 and 2000ms, else set zero delay */       //     |
    uint16_t MaxResponseDelay;                              //     |
    if(send_via_broadcast == 1)                             //     |
    {                                                       //     |
        uint16_t MaxResponseDelay =                         //     |
        (rand() % (2000 - 500 + 1)) + 500;                  //     |
    }                                                       //     |
    else;                                                   //     |
    {                                                       //     |
        uint16_t MaxResponseDelay = 0;                      //     |
    }                                                       //     |
    memcpy(input_structure.sender_context[0],               //     |
           (const void *) MaxResponseDelay, 2);             //    ---
    /* Remaining are ignored by target, shall be zero */    //    ---
    input_structure.sender_context[2] = 0;                  //     |
    input_structure.sender_context[3] = 0;                  //     |
    input_structure.sender_context[4] = 0;                  //     |
    input_structure.sender_context[5] = 0;                  //     |
    input_structure.sender_context[6] = 0;                  //     |
    input_structure.sender_context[7] = 0;                  //    ---
    input_structure.options = 0;                            // Hard coded
}