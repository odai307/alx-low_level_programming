#include <stdio.h>
#include "main.h"

/*
 * main - function to print sum from 0 to 1024
 * which are multiples of 3 and 5
 */

int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

