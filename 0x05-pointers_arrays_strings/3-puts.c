#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a new line
 * @str: parameter
 * Return: answer
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(1);
}

