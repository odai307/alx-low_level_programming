#include <stdio.h>
#include <time.h>
/* more headers goes there */

/*betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand();
	
	/* your code goes there */
	if ( n > 0) {
		printf("the last digit of %d\n is greater than 5", rand());
} 
else if ( n == 0) {
		printf("the last digit of %d\n is 0", rand());
} 
else if ( n < 6 && n != 0) {
	printf("the last digit of %d\n is less than 6 and not 0\n", ());
}
	return (0);
}


