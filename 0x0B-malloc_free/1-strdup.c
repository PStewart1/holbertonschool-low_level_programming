#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string and returns pointer to new string
 * @str: string to be duplicated
 *
 * Return: pointer to the new string, or NULL if failed.
 */

char *_strdup(char *str)
{
	char *str2;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	str2 = malloc(sizeof(str));
	if (str2 == NULL)
		return (NULL);

	for (i = 0; i <= (sizeof(str) + 1); i++)
		str2[i] = str[i];

	return (str2);
}
