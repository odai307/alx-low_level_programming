#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description : using the main function
 * Retur 0
 */
int main(void)
{
	char c;
	int i;
	long jj;
	long long jjj;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(jj));
	printf("Size of a long long int: %d byte(s)\n", sizeof(jjj));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
