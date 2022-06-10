#include "main.h"

/**
 * _strncat - concatenates 2 strings together.
 *@dest: string to be concatenated
 *@src: string to be added to other
 *@x: max number of bytes to usse from src
 *
 * Return: concatenated string.
 */

char *_strncat(char *dest, char *src, int x)
{
	int i, n = 0;

	while (dest[n] != '\0')
		n++;

	for (i = 0 ; i < x && src[i] != '\0' ; i++)
		dest[n + i] = src[i];

	dest[n + i] = '\0';
	return (dest);
}
