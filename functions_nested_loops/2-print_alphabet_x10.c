#include "main.h"

/**
 *This is the preferred style for multi-l
 *Description: print_alphabet_x10.c
 ** with beginning and ending almost-blank lines.
 */

void print_alphabet_x10(void)
{

	char lettre;
	int i;

	for (i = 0; i < 10; i++)
	{

		for (lettre = 'a'; lettre <= 'z'; lettre++)

		{_putchar(lettre); }

		_putchar('\n'); }

}

