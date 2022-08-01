#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of dlist.
 * @head: dlist to be added to
 * @n: content of new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *last;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		node->prev = last;
		last->next = node;
	}
	return (node);
}
