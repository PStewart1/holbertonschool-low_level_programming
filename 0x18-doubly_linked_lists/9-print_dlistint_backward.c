#include "lists.h"

/**
 * print_dlistint_backward - prints all the elements of a dlist, in reverse.
 * @h: dlist to be printed
 *
 * Return: the number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->prev;
	}
	return (count);
}
