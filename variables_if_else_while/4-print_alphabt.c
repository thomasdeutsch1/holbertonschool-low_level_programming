#include <stdio.h>

/**
 *  *  * main - void
 *   * Return: Always 0 (Success)
 *    **/

int main(void)
{
	char lowercase;

	lowercase = 'a';


	while (lowercase <= 'z')
	{
		if (lowercase != 'e' && lowercase != 'q')
		{putchar(lowercase); }
		lowercase++;

	}


	putchar('\n');
	return (0);
}
