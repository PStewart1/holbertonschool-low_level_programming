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
	unsigned long int i;
	int x = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; ht != NULL && i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (x)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			x = 1;
			node = node->next;
		}
	}
	 printf("}\n");
}
