#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse
 *
 * Return: always return zero
 */
int main(void)
{
	char alp;
for (alp = 122; alp > 96; alp--)
{
	putchar(alp);
}
putchar('\n');
return (0);
}
