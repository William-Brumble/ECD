#include "eip_controller.h"

int
eip_controller()
{
	/* If this is the first time running, let's initialize. */
	if(three_first_scan == 1)
	{
		/* Change variable to indicate program has been ran */
		three_first_scan = 0;

		/* Perform first time running layer one initialization */
		if(three_initialize() == -1) { return -1; }
	}
    return 0;
}
