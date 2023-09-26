#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: A pointer to the head of the list_t list.
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		nodes++;
		h = h->next;
	}

	return (nodes);
}
