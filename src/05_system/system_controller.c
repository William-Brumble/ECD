#include "system_controller.h"
#include "data_types.h"

int
system_controller()
{
	/* If this is the first time running, let's initialize. */
	if(five_first_scan == 1)
	{
		/* Change variable to indicate program has been ran */
		five_first_scan = 0;

		/* Perform first time running layer one initialization */
		if(five_initialize() == -1) { return -1; }
	}

    return 0;
}
