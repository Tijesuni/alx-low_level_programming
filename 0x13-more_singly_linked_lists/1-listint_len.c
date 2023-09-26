#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in the list
 * @h: A pointer to the head of the
 *     listint_t list
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
