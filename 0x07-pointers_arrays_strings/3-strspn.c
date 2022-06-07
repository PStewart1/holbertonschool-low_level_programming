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
	int n = 0;

	while (*s != '\0')
	{
		if (*s != accept)
			break;

		n++;
	}
	return (n);
}
