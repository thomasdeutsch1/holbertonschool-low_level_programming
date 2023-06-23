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
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
