#include "main.h"
/**
 * print_square - prints a square
 * @size: prints the size
 * Return: always 0
 */
void print_square(int size)
{
	int l1, l2;

	if (size > 0)
	{
		for (l1 = 0; l1 < size; l1++)
		{
			for (l2 = 0; l2 < (size - 1); l2++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
