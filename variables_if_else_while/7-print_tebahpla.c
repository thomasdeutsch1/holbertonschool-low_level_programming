#include <stdio.h>

/**
 *  *  *  * main - void
 *   *   * Return: Always 0 (Success)
 *    *    **/

int main(void)
{
	char lettre;

	for (lettre = 'z'; lettre >= 'a'; lettre--)
		putchar(lettre);

	putchar('\n');

	return (0);
}
