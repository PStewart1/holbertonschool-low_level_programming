#include "main.h"

/**
 * _strcat - concatenates 2 strings together.
 *@dest: string to be concatenated
 *@src: string to be added to other
 *
 * Return: concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i, n = 0;

	while (dest[n] != '\0')
		n++;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[n + i] = src[i];

	dest[n + i] = '\0';
	return (dest);
}
