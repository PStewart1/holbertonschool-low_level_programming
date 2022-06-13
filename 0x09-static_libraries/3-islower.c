#include "main.h"

/**
 * _islower - checks ascii letter if lowercase
 * @c: ascii number for letter to be checked if lowercase or not
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

