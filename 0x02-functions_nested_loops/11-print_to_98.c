#include "main.h"
/**
 * print_to_98 - prints all natural numbers fro input to 98
 * @n: The number to begin counting at 
 * Return: 0
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
}
