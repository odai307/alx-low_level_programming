#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size parameter of triangle
 * Retur: returns nothing
 */
void print_triangle(int size)
{
	int l1, l2;

	if (size > 0)
	{
		for ((l2 - size - l1); l2 > 0; l2--)
		{
			_putchar(' ');
		}
		for (l2 = 0; l2 < l1; l2++)
		{
			_putchar('0');
		
			if (l1 == size)
			{	
				continue;
			}
		}
		_putchar('\n');
	}
}
