#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint list
 * @n: pointer to the list
 * *Return: all the nodes
 **/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
