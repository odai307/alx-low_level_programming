#include "main.h"
/**
 * main - print putchar
 * Return : always 0
 */

int main(void)
{
	char c[8] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
		
}
