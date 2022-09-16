#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: print \n when n is 0 or less
 * Return: 0
 */
void print_diagonal(int n)
{
	int len, space;
	
	if (n > 0)
	{
		for (len = o; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}
			putchar('\\');
			if (len == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	putchar('\n');
}
