#include <stdio.h>

/**
 *  *  *  *  *  * main - void
 *   *   *   *   * Return: Always 0 (Success)
 *    *    *    *    **/

int main(void)
{
	int number;

	number = '0';


	for (number = '0'; number < '9'; number++)

	{
		putchar(number);
		putchar(',');
		putchar(' ');
	}

	putchar('9');
	return (0);
}
