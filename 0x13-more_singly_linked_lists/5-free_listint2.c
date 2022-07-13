#include "lists.h"

/**
 * free_listint2 - FREE's a listint_t list and sets head to NULL
 * @head: list to be free'd
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *nextnode;

	if (head == NULL)
		return;

	node = *head;
	while (node)
	{
		nextnode = node->next;
		free(node);
		node = nextnode;
	}
	*head = NULL;
}
