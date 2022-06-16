#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings together.
 *@dest: 1st string to be concatenated
 *@src: 2nd string to be added to other
 *
 * Return: new concatenated string.
 */

char *str_concat(char *dest, char *src)
{
	int i, j = 0, k = 0;
	char *str;

	while (dest[j] != '\0')
		j++;

	while (src[k] != '\0')
		k++;

	str = malloc(j + k + 2);
	if (str == NULL)
		return (NULL);

	for (i = 0 ; dest[i] != '\0' ; i++)
		str[i] = dest[i];

	for (j = 0; src[j] != '\0' ; i++, j++)
		str[i] = src[j];

	str[i] = '\0';
	return (str);
}
