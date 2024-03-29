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
		if (node->next)
		{
			*head = node->next;
			prev = node->next;
			prev->prev = NULL;
			free(node);
			node = NULL;
		}
		else
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}
	prev = node;
	for (i = 0; i < index; i++)
	{
		prev = node;
		node = node->next;
		if (node == NULL)
			break;
		node->prev = prev;
	}
	if (i != index)
		return (-1);
	prev->next = node->next;
	free(node);
	return (1);
}
