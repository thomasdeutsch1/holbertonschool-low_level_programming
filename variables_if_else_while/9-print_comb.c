#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  *  *  *  *  * main - void
 *   *   *   *   * Return: Always 0 (Success)
 *    *    *    *    **/
#include <stdio.h>

int main(void)

{
	int number;

	for (number = '0'; number <= '9'; number++)

	{	
		putchar(number);
	if (number != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}

putchar('\n');
return (0);
}
