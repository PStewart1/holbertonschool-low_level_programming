#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a point in a dlist
 * @head: head of dlist
 * @index: index of node to be deleted
 * Return: 1 if succesful, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	prev = node;
	for (i = 0; i < index; i++)
	{
		if (node == NULL)
			break;
		prev = node;
		node = node->next;
		node->prev = prev;
	}
	if (i != index)
		return (-1);

	prev->next = node->next;
	free(node);
	return (1);
}
