#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers fro input to 98
 * @n: The number to begin counting at
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	putchar('\n');
}
