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
	int i = 0, j = 0, k = 0;
	char *str;

	if (dest != NULL)
	{
		while (dest[j] != '\0')
			j++;
	}
	else
		j = 1;

	if (src != NULL)
	{
		while (src[k] != '\0')
			k++;
	}
	else
		k = 1;

	str = malloc(j + k + 1);
	if (str == NULL)
		return (NULL);

	if (dest != NULL)
	{
		for (; i < j; i++)
			str[i] = dest[i];
	}
	if (src != NULL)
	{
		for (j = 0; j < k; i++, j++)
			str[i] = src[j];
	}
	str[i] = '\0';
	return (str);
}
