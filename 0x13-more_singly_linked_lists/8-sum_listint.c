#include "lists.h"

/**
 * sum_listint - returns the sum of elements of a listint_t list.
 * @head: list to be summed up
 *
 * Return: the sum
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
