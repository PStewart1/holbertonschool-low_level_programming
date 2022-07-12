#include "lists.h"

/**
 * delets_nodeint_at_index - deletes a node at a point in a list
 * @head: head of list
 * @index: index of node to be deleted
 * Return: 1 if succesful, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev;
	unsigned int i;

	if (*head == NULL)
		return (1);

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
		if (node->next == NULL)
			break;
		prev = node;
		node = node->next;
	}
	if (i != index)
		return (-1);

	prev->next = node->next;
	free(node);
	return (1);
}
