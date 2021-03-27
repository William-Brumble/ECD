#include "eip_listIdentity.h"

/* A connection originator may use the ListIdentity command to locate and
 * identify potential targets */
void
request_list_identity(struct eip_header *input_structure,
                      int32_t *session_handle,
                      _Bool *send_via_broadcast,
					  int32_t *clientSocket,
					  char *send_buff)
{
    input_structure->command = 0x0063;                     // Hard coded
    input_structure->length = 0x0000;                      // Hard coded
    input_structure->session_handle = *session_handle;     // Ignored by target
    input_structure->status = 0x00000000;                  // Hard coded
    /* If sending via broadcast, set a random delay        //    ---
     * between 500 and 2000ms, else set zero delay */      //     |
    uint16_t MaxResponseDelay;                             //     |
    if(*send_via_broadcast == 1)                           //     |
    {                                                      //     |
        MaxResponseDelay =                                 //     |
        (rand() % (2000 - 500 + 1)) + 500;                 //     |
    }                                                      //     |
    else;                                                  //     |
    {                                                      //     |
        MaxResponseDelay = 0x0000;                         //     |
    }                                                      //     |
	MaxResponseDelay = htons(MaxResponseDelay);			   //     |
    memcpy(&input_structure->sender_context[0],            //     |
           &MaxResponseDelay, 2);                          //    ---
    /* Remaining are ignored by target, shall be zero */   //    ---
	for(int i = 0; i < 6; i++)							   //     |
	{													   //	  |
		input_structure->sender_context[i + 2] = 0x00;     //	  |
	}													   //    ---
    input_structure->options = 0x00000000;                 // Hard coded
	memcpy(send_buff, input_structure, 24); 			   // Serialize it
	send(*clientSocket, send_buff, 24, 0);  			   // Send it!
}
