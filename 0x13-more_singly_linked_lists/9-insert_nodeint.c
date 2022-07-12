#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a point in a list.
 * @head: head of list of nodes
 * @idx: index of node to find
 * @n: content of new node
 * Return: the address of the new element, or NULL if it doesn't exist
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *newnode = malloc(sizeof(listint_t));
	unsigned int i;

	if (*head == NULL || newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	node = *head;
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = node;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (node->next == NULL)
			break;
		node = node->next;
	}
	if (i != idx - 1)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = node->next;
	node->next = newnode;
	return (newnode);
}
