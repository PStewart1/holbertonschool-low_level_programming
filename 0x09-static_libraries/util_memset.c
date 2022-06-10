#include "main.h"

/**
 * _memset - fills the first n byets of s with b
 * @s: pointer to memory area to be filled
 * @b: byte to fill s
 * @n: number of bytes to fill
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
