#include "main.h"
/**
 *  print_line - draw a straignt line
 *
 *  Return: Always zero
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
