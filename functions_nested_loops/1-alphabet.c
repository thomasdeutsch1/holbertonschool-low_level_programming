#include "main.h"


/**
 *  *  * main - void
 *   * Return: Always 0 (Success)
 *    **/


void print_alphabet(void);
int main(void)
{
	char lettre;

	lettre = 'a';

	for (lettre = 'a'; lettre <= 'z'; lettre++)

		_putchar(lettre);

	_putchar('\n');
	return (0);
}
