#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, n = 0;
	char c;

	while (s[n] != '\0')
	{
		++n;
	}

	for (i = 0, j = (n - 1); i < j; ++i, --j)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
