#include "main.h"

/**
 * flip_bit - returns the number of bits to change a into b
 * @a: first int
 * @b: second int
 * Return: number of bits to shift
 */

unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	int count = 0;
	unsigned long int n = a ^ b;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
