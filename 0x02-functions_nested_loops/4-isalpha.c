#include "main.h"
/**
 * _isalpha - checks alphabetic character
 *@c: is the int that will use for the argument of the function
 * Return: o
 */
int _isalpha(int c)
{
	if (c >= 'a' || c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
