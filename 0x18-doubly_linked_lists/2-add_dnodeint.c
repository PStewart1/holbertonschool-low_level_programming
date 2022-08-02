#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of dlist.
 * @head: dlist to be added to
 * @n: content of new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *first;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	if (*head != NULL)
	{
		first = *head;
		node->next = first;
		first->prev = node;
	}
	*head = node;
	return (node);
}
