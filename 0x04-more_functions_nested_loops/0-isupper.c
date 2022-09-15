#include "main.h"
/**
 * _isupper - checks for uppercase letter
 *@c: character to be tested
 * Return: 1 if c is uppercase and 0 if c is lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <=90)
	{
		return (1);
	}	
	return (0);
}
