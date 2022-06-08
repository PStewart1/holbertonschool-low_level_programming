#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: set to search
 *
 * Return: substring of s
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, n = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{	n++;
				return (s + i);
			}

			j++;
		}

		j = 0;
		i++;
	}
	return ('\0');
}
