#include <stdio.h>
/**
 * print_alphabetx10 - function to print abc 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char n;
	char m;
	for ( n = 0; n < 9; n++)
	{
		for (m = 97; m < 123; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
