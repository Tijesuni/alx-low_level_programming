#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of
 *            elements in a linked list
 * @h: The list in the linked lists
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
