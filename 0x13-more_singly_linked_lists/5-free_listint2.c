#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: A Pointer to the head of the
 *        listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *newNode;

	if (head == NULL)
		return;

	while (*head)
	{
		newNode = (*head)->next;
		free(*head);
		*head = newNode;
	}

	head = NULL;
}
