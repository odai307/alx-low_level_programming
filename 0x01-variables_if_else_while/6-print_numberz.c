#include<stdio.h>
/**
 * main - print numbers using putchar function
 *
 * Return: zero
 */
int main(void)
{
	int i;
for (i = 48; i < 58; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
