#include "holberton.h"

/**
 * cap_string - Capitalizes all words in string
 *@s: string to be capitalized
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 32 && s[i] <= 34) || (s[i] >= 40 && s[i] <= 41) ||
(s[i] == ',') || (s[i] == '.') || (s[i] == ';') || (s[i] == 9) ||
(s[i] == '?') || (s[i] == '{') || (s[i] == '}') || (s[i] == 10))
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = (s[i + 1] - 32);
		}
		i++;
	}

	return (s);
}
