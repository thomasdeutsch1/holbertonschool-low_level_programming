#include "main.h"

/**
 *  * print_last_digit - function
 *   *@number: ok
 *    *Return: Last
 ***/

void jack_bauer(void)

{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++) {
		for (minutes = 0; minutes < 60; minutes++) {
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
		}
	}
}
