#include "main.h"

/**
 *_islower - if else
 * @c: int
 ** Description: islower
 ** Return: Descrition
 **/


int print_sign(int n)

{
	if (n > '0')

	{
		_putchar ('+');
		return (1);
	}


	else if (n == '0')

	{
		_putchar ('0');
		return (0);
	}


	else if (n < '0')

	{	
		_putchar ( '-' );
		return (-1);
	}

	return  (0);
}
