#include<stdio.h>
/**
 * main - prints numbers and letters with commas and spaces
 *
 * Return: zero
 */
int main(void)
{
	int i;
for (i = 48; i < 58; i++)
{
	putchar(i);
	if (i != 57)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
