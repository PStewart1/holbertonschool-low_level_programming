#include "main.h"

/**
 * print_binary - prints out an int in binary
 * @n:int to be converted
 * Return: void
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
