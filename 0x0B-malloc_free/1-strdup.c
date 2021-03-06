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
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;

	str2 = malloc(j + 1);
	if (str2 == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
		str2[i] = str[i];

	return (str2);
}
