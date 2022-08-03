#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key.
 * @size: the size of the array
 * @key: the key to find
 * Return: the index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
