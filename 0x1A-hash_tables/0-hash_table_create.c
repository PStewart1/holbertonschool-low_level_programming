#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);

	ht->array = malloc(size);
	if (!ht->array)
		return (NULL);

	return (ht);
}
