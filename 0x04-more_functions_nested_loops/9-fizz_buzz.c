#include <stdio.h>
/**
 * main - program that prints either number
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num++ < 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("Fizz Buzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	putchar('\n');
	return (0);
}
