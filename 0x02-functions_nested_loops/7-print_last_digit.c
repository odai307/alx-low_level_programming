#include "main.h"
/**
 * print_last_digit - prints the last digit of an alphabet
 * @n: The number in question
 * Return: 0
 */
int print_last_digit(int n)
{
	int l;
	l = n % 10;

	if (n < 0)
	{
		return( n * -1);
		_putchar(l);
	}
	else
	{
		_putchar(l);
	}
	return (0);
}
