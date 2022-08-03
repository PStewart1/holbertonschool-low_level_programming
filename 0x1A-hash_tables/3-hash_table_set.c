#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table.
 * @key: the key of the new element
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head, *first, *node = malloc(sizeof(hash_node_t));
	unsigned long int index;

	if (!key || strlen(key) <= 1 || !node )
		return (0);
	strcpy(node->key, key);
	node->value = strdup(value);
	if (!node->value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	
	if (head != NULL)
	{
		first = head;
		node->next = first;
	}
	head = node;
	return (1);
}
