#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: pointer to the head of the skip list to search in
 * @value: value we're searching for
 * Return: a pointer on the first node where value is located
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = NULL;

	if (list)
	{
		node = list;
		while (node->express)
		{
			printf("Value checked at index [%lu] = [%i]\n",
					node->express->index, node->express->n);
			if (node->express->n >= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n",
						node->index, node->express->index);
				break;
			}
			node = node->express;
		}
		if (!node->express)
		{
			list = node;
			while (list->next)
				list = list->next;
			printf("Value found between indexes [%lu] and [%lu]\n",
					node->index, list->index);
		}
		list = node;
		while (list != node->express)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			list->index, list->n);
			if (list->n == value)
				break;
			list = list->next;
		}
		if (list != node->express)
			return (list);
	}
	return (NULL);
}
