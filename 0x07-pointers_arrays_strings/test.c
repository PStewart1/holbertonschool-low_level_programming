#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates the first occurence of c within s
 * @s: pointer to string
 * @c: char to locate
 *
 * Return: pointer s
 */

int  main (void)
{
	char *s = "hello";
	char c = 'o';
	int i, n =0;

	if (s[0] == '\0' || c == '\0')
	{
		printf("%s is null \n", s);
		return ('\0');
	}

	while (s[n] != '\0')
		n++;

	for (i = 0; i < n ; i++)
	{
		if (s[i] == c)
		{
			printf("%s is not null\n",s + i);
			return 0;
		}
	}

  	printf("%s finished\n", s);		

	return (0);
}
