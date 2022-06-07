#include "holberton.h"

/**
 * leet - encodes a string into "1337"
 *@s: string to be eLEETed
 *
 * Return: eLEETed string
 */

char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		(s[i] == 65 || s[i] == 97) && (s[i] =  52);
		(s[i] == 69 || s[i] == 101) && (s[i] = 51);
		(s[i] == 79 || s[i] == 111) && (s[i] = 48);
		(s[i] == 84 || s[i] == 116) && (s[i] = 55);
		(s[i] == 76 || s[i] == 108) && (s[i] = 49);

		i++;
	}

	return (s);
}
