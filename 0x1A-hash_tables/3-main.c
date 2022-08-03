#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "1");
	hash_table_set(ht, "mentioner", "2");
    return (EXIT_SUCCESS);
}
