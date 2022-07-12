#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: list to be added to
 * @str: content of new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *first;

	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*head != NULL)
	{
		first = *head;
		node->next = first;
	}
	*head = node;
	return (node);
}
