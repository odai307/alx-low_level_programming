#include <stdio.h>
#include <time.h>
#include<stdlib.h>
/**
 * main - checks last digit
 *
 * return: always zero
 */
 int main(void)
{
	int n;
	int l;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if ( l > 5)

{
	printf("the last digit of %d is %d and is greater than 5", n, l);
} else if ( l == 0)
{
	printf("the last digit of %d is %d and is 0", n, l);
} else if ( l < 6 && l != 0)
{
	printf("the last digit of %d is %d and is less than 6 and not 0", n, l);
}
return (0);
}
