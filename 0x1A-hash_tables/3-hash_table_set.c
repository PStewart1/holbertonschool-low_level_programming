#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table.
 * @ht: the hash table to update
 * @key: the key of the new element
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head;
	hash_node_t *node = (hash_node_t *)malloc(sizeof(hash_node_t));
	unsigned long int index;

	if (!ht || !key || strlen(key) < 1 || !node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (!node->value || !node->key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node->next = NULL;
	head = ht->array[index];

	if (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			head->value = strdup(value);
			free(node->key);
			free(node->value);
			free(node);
			return (1);
		}
		else
			node->next = head;
	}
	ht->array[index] = node;
	return (1);
}
