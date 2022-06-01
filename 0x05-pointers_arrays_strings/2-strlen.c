#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: int i, length of string *s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
