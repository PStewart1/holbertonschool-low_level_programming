#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: converted number, or 0 if fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, binary, decimal = 0, base = 1, remainder;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	binary = atoi(b);
	while (binary > 0)
	{
		remainder = binary % 10;
		decimal += remainder * base;
		binary = binary / 10;
		base = base * 2;
	}

	return (decimal);
}
