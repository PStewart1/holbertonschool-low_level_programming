#include "main.h"

/**
 * get_bit - prints out the bit at a given index
 * @n: int to be converted
 * @index: index of bit to be printed
 * Return: bit at index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	
	if (index > 63)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}
