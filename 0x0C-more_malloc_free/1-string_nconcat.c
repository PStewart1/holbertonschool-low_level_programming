#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates 2 strings together.
 *@s1: 1st string
 *@s2: 2nd string
 *@x: max number of bytes to usse from s2
 *
 * Return: pointer to new concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int x)
{
	int i;
	unsigned int j;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	p = malloc(strlen(s1) + x + 1);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
		p[i] = s1[i];


	for (j = 0; j < x && s2[j] != '\0' ; i++, j++)
		p[i] = s2[j];

	p[i] = '\0';
	return (p);
}
