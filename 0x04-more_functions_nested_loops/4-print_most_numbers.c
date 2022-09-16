#include "main.h"
/**
 * print_most_numbers - print most numbers
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 || n != 52)
		{
			_putchar(n);
		}
		putchar('\n');
	}
}
