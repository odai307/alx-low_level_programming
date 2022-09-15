#include "main.h"
/**
 * more_numbers - print numbers from 0 - 14 10 times
 *
 * Return: 0
 */
void more_numbers(void)
{
	char times;
	int numbers;
	numbers = 0;

	for (times = 48; times <= 57; times++)
	{
		_putchar('\n');
		while (numbers <= 14)
		{
			_putchar(numbers);

