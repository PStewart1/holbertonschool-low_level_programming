#include "lists.h"

/**
 * get_nodeint_at_index - finds a node in a list.
 * @head: head of list of nodes
 * @index: index of node to find
 * Return: the address of the new element, or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
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
