#include "main.h"

/**
 * set_bit - sets the bit at a given index to 1
 * @n: int to be shifted
 * @index: index of bit to be set
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}
