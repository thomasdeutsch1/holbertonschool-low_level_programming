#include "main.h"

/**
 * _islower - if else
 * @c: int
 * Description: islower
 * Return: Descrition
 */


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
