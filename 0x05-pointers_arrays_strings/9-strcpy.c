#include "main.h"

/**
 * _strcpy - copies a string pointer to another pointer
 * @dest: empty string array
 * @src: string to be copied
 *
 * Return: string pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i, n = 0;

	while (src[n] != '\0')
		++n;

	for (i = 0; i <= n; ++i)
		dest[i] = src[i];

	return (dest);
}
