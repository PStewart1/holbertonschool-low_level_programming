#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to string
 * @needle: substring to find
 *
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *str;
	char *pattern;

	while (*haystack)
	{
		str = haystack;
		pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (str);

		haystack = str + 1;
	}
	return ('\0');
}
