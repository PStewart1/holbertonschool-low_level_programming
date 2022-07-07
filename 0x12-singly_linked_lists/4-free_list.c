#include "lists.h"

/**
 * free_list - FREE's a list_t list.
 * @head: list to be free'd
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
