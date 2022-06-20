#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concats all arguments of program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to str
 */

char *argstostr(int ac, char **av)
{
	int i, j, n = 0;
	char *str;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		n += strlen(av[i]);
		n++;
	}
	str = malloc((n + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	n = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
		str[n] = av[i][j];
		n++;
		}
	str[n] = '\n';
	n++;
	}
	str[n] = '\0';
	return (str);
}
