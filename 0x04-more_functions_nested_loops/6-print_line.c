#include "main.h"
/**
 *  print_line - draw a straignt line
 *
 *  Return: Always zero
 */
void print_line(int n)
{
	char i = '_';
	char j = i * n;

	if (n > 0)
	{
		_putchar(j);
	}
	else
	{
		_putchar('\n');
	}
}
