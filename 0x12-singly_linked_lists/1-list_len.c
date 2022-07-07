#include "lists.h"

/**
 * list_len - prints all the elements of a list_t list.
 * @h: list to be printed
 *
 * Returns: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
