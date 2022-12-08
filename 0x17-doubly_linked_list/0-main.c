#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
	dlistint_t *head;
	dlistint_t *new;
	dlistint_t hello = {NULL, 8, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: \n");
		return (EXIT_FAILURE);
	}
	new->n = 9;
	head->prev = new;
	new->next = NULL;
	head = new;
	n = print_dlistint(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (EXIT_SUCCESS);
}
