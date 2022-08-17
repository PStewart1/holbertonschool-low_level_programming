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
	long unsigned int i;
	int x;

	printf("{");
	for (i = 0; ht != NULL && i < ht->size; i++)
	{
		node = ht->array[i];
		x = 0;
		while (node)
		{
			if (x)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			x = 1;
		}
	}
	 printf("}\n");
}
