#include "main.h"

/**
 * _isalpha - checks ascii number if it is alphbetic
 * @c: ascii number to be checked if letter or not
 *
 * Return: 1 if letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

