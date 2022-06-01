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
	int i;

	for (i = 0; src[i] != '\0'; ++i)
		dest[i] = src[i];

	return (dest);
}
