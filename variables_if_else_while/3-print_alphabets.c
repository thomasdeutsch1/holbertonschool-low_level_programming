#include <stdio.h>

/**
 *  *  * main - void
 *   * Return: Always 0 (Success)
 *    **/

int main(void)
			
{	char lowercase, uppercase;

			lowercase = 'a';
			uppercase = 'A';
			while (lowercase <= 'z')
			{putchar(lowercase);
			lowercase++; }
			while (uppercase <= 'Z')
			{putchar(uppercase);
			uppercase++; }
			putchar('\n');
			return (0); }
