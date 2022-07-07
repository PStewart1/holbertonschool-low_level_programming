#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @head: list to be printed
 * @str: 
 * Returns: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *last;

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
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
