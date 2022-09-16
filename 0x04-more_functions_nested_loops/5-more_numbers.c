#include "main.h"
/**
 * more_numbers - print numbers from 0 - 14 10 times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 15; n2++)
		{
			if (n2 > 9)
			{
				_putchar((n2 / 10) + '0');
			}
			_putchar((n2 % 10) + '0');
		}
		_putchar(10);
	}
}
