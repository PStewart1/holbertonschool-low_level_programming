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
	int i = 0;

	if (s[0] == '\0' || c == '\0')
	{
		return ('\0');
	}

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

