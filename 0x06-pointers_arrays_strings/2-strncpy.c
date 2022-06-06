#include "holberton.h"

/**
 * _strncpy - copies 1 string onto another.
 *@dest: string to be copied over
 *@src: string to be copied
 *@n: max number of bytes to use from src
 *
 * Return: copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
