#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: substring to find
 *
 * Return: number of bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, n = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				n++;
				break;
			}

			j++;
		}
		if (accept[j] != s[i])
			return (n);

		j = 0;
		i++;
	}
	return (n);
}
