#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node in a dlist.
 * @head: head of dlist of nodes
 * @index: index of node to find
 * Return: the address of the new element, or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	node = head;
	for (i = 0; i != index; i++)
	{
		if (node->next == NULL)
			return (NULL);
		node = node->next;
	}
	return (node);
}
