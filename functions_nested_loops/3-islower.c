#include "main.h"

/**
 * function_name - Descrition
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
