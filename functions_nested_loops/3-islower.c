#include "main.h"

/**
 *** int _islower(int c); - isoler lowercase expect c
 *
 **/

int _islower(int c);


int _islower(int c)

{
	if (c >= 'a' && c <= 'z')

	{
		return (1);
	}

	else

	{
		return (0);
	}
}
