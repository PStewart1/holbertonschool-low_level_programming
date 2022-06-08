#include "main.h"

/**
 * _strchr - locates the first occurence of c within s
 * @s: pointer to string
 * @c: char to locate
 *
 * Return: pointer s
 */

char *_strchr(char *s, char c)
{
	char *p = s;
	int n = 0;

	while (*s != c)
	{
		++s;
		++n;
	}

	if (*s == c)
	{
		return (p + n);
	}
	else
	{
		return ('\0');
	}
}
