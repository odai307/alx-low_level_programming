#include "main.h"
/**
 * swap_int - swap the value of integers
 * @a: assigns the value of b
 * @b: assigns the value of a
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int tem = *a;

	*a = *b;
	*b = tem;
}
