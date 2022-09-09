#include <stdio.h>
#include <time.h>
/* more headers goes there */

/*betty style doc for function main goes there */
int main(void)
{
	int n=98;
	
	/* your code goes there */
	if ( n > 0) {
		printf("the last digit of %d is greater than 5", n);
} 
else if ( n == 0) {
		printf("the last digit of %d is 0", n);
} 
else if ( n < 6 && n != 0) {
	printf("the last digit of %d is less than 6 and not 0\n", n);
}
	return (0);
}


