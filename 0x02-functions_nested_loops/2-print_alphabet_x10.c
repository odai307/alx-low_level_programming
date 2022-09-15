#include "main.h"
/**
 * print_alphabet_x10 - function to print abc ten times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char n;
	char m;

	for (n = 0; n < 10; n++)
	{
		for (m = 97; m < 123; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
