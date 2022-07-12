#include "lists.h"

/**
 * pop_listint - FREE's a listint_t list and sets head to NULL
 * @head: list to be pop'd
 *
 * Return: void
 */

int pop_listint(listint_t **head)
{
	listint_t *node, *nextnode;
	int n = 0;

	if (*head == NULL)
		return (n);

	node = *head;
	n = node->n;
	nextnode = node->next;
	node = nextnode;
	free(nextnode);
	return (n);
}
