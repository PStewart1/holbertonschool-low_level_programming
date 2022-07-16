#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: converted number, or 0 if fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, base = 1;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		decimal += (b[i] - '0') * base;
		base = base << 1;
	}

	return (decimal);
}
