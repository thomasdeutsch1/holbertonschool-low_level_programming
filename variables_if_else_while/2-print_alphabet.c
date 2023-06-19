#include <stdio.h>

/**
 *  * main - void
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char lowercase;

	lowercase = 'a';

	while (lowercase <= 'z')
	{putchar(lowercase);
		lowercase++;
	}

	putchar('\n');
	return (0);
}
