#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - print whether code is positive or negative
 *
 * Return: always zero
 */
int main(void)
{
	int i;
	srand(time(0));
	i = rand() - RAND_MAX / 2;
if (i > 0)
{
	printf("%d is positive\n", i);
}
else if (i == 0)
{
	printf("%d is zero\n", i);
}
else
{
	printf("%d is negative\n", i);
}
return (0);
}
