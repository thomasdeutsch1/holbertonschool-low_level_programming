#include "main.h"

/**
 * print_last_digit - function
 *@number: ok
 *Return: Last
 **/


int print_last_digit(int number)


{
	int last;

	if (number < 0)
	{	
		last = number % 10 * -1;
		_putchar(last + '0');
		return(last)
	}
	else
	{
		last = number % 10;
		_putchar(last + '0');
		return (last); 
	}

}
