#include "lists.h"

/**
 * sum_dlistint - returns the sum of elements of a dlistint_t list.
 * @head: dlist to be summed up
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
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
