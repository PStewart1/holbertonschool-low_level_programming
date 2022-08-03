#include "hash_tables.h"

/**
 * hash_table_print - prints all the elements of a hash table.
 * @ht: hash table to be printed
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int i = 0;

	if (!ht)
		return;

	printf("{");
	while (ht->array[i])
	{
		node = ht->array[i];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
		if (ht->array[i + 1])
			printf(", ");
		i++;
	}
	 printf("}\n");
}
