#include "main.h"

void print_most_numbers(void)
{
	for (int n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n);
		}
	
	_putchar('\n');
	}
}
