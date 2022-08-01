#include "lists.h"

/**
 * free_dlistint - FREE's a dlistint_t list.
 * @head: dlist to be free'd
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
