#include "hash_tables.h"

/**
 * hash_table_get - gets an element of a hash table.
 * @ht: the hash table to search
 * @key: the key of the element to find
 *
 * Return: value of the element, NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = (hash_node_t *)malloc(sizeof(hash_node_t));
	unsigned long int index;

	if (!ht || !key || strlen(key) < 1 || !node)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node && strcmp(node->key, key))
	{
		node = node->next;
	}
	if (node && strcmp(node->key, key) == 0)
		return (node->value);
	else
		return (NULL);
}
