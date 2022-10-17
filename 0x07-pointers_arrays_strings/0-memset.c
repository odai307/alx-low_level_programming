#include "main.h"
/**
 * _memset - fills a memory block with a constant bytes
 * @s: a pointer to the memory area to be filled
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled with
 *
 * Return: A pointer to to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
