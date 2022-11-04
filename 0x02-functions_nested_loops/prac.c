#include <stdio.h>
/**
 * times_table - prints 9 times table, starting with 0
 *
 * Return: 0
 */
int main(void)
{
	int num, mult, prod;
	for (num = 0; num <=9; num++)
	{
		putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			putchar(',');
			putchar(' ');
			prod = num * mult;
			if (prod <= 9)
			{
				putchar(' ');
			}
			else
			{
				putchar(' ');
			}
			putchar((prod % 10) + '0');
		}
		putchar('\n');
	}
}

