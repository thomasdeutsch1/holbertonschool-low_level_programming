#include "main.h"

/**
 * main - void
 * 
 * Description: print_alphabet_x10
 ** 
 ** 
 * Return: Always 
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

