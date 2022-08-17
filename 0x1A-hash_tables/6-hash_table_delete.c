#include "hash_tables.h"

/**
 * hash_table_delete - deletess all the elements of a hash table.
 * @ht: hash table to be deleted
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *freed;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; ht != NULL && i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			freed = node;
			node = node->next;
			free(freed->key);
			free(freed->value);
			free(freed);
		}
	}
	free(ht->array);
	free(ht);
}
