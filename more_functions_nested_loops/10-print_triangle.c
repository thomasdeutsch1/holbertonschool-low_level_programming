#include "main.h"

/**
 * print_triangle - Imprime un triangle suivi d'un saut de ligne
 * @size: La taille du triangle
 */
void print_triangle(int size)

{
	int i, j;

	if (size <= 0)

	{
		_putchar('\n');
	}

	for (i = size; i < 0; i--)
	{
		for (j = 1; j <= i; j++)
			_putchar(' ');

		for (j = size - i; j < size; j++)
			_putchar('#');

		_putchar('\n');
	}
}
