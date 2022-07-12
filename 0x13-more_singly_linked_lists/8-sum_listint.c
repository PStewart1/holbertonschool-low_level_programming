#include "lists.h"

/**
 * listint_len - returns the number of elements of a listint_t list.
 * @h: list to be counted
 *
 * Return: the number of nodes
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (head == NULL)
		return (0);

	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
