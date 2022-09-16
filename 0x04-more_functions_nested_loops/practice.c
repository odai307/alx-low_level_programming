#include <stdio.h>
int main(void)
{
	int r;
	int c;

	for (r = 48; r < 58; r++)
	{
		putchar(r);
		for (c = 48; r < 58; c++)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
