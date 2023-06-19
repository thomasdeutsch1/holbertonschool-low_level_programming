#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - void Programm
 *   * Return: success
 */

int main(void)
{
	int n;
	int Last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last = n % 10;

	if (n > 5)
	{printf("Last digit of %d is %d and is greater than 5\n", n, Last); }
	else if (n == 0)
	{printf("Last digit of %d is %d and is 0\n", n, Last); }
	else if (n < 6)
	{printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last); }

	return (0);
}
