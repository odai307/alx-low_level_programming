#include "main.h"
/**
 * _strcat - concatenates the string pointd to by @ src to
 * the end of the string pointed by @ sest
 * @dest: String that will be appended
 * @src: string to be conatened upon
 *
 * Return: returns to pointer @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
