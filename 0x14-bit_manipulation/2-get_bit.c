#include "main.h"

/**
 * get_bit - prints out the bit at a given index
 * @n: int to be converted
 * @index: index of bit to be printed
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 63, startprinting = 0;
	unsigned long int num;
	int array[64];

	for (; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			array[i] = 1;
			startprinting = 1;
		}
		else if (startprinting == 1)
			array[i] = 0;
	}
	if (index > 63)
		return (-1);

	return (array[index]);
}
