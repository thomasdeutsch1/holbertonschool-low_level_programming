#include "main.h"

/**
 *  * times_table - prints the 9 times table
 *   */

void times_table(void)

{
	int row, column, product;

	for (row = 0; row <= 9; row++) 
	
	{
		for (column = 0; column <= 9; column++) 
		
		{
			product = row * column;
			
			if (column == 0)
				_putchar('0');
			
			else if (product <= 9)
				_putchar(' ');
			
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');

			if (column != 9)
			
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
