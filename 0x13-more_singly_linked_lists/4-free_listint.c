#include "lists.h"

/**
 * free_listint - FREE's a listint_t list.
 * @head: list to be free'd
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
