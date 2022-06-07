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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}
	return (s);
}
