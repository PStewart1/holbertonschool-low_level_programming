#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list.
 * @head: list to be added to
 * @n: content of new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *last;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = node;
	}
	return (node);
}
