#include <stdio.h>

/*
 *main - void Programm
 *Return: success
 */

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
