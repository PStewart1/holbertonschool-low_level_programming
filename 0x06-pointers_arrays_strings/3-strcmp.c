#include "holberton.h"

/**
 * _strcmp - compares 2 strings
 *@s1: string to be compared
 *@s2: string to be compared
 *
 * Return: 0 if equal, positve or negative int if unequal.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int n = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			n = s1[i] - s2[i];
			return (n);
		}
		i++;
	}


	return (n);
}
