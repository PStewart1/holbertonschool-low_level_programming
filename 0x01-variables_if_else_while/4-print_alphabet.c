#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints each letter from a to z, except q and e
 *
 * Return: 0, always succesful
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
		}
		else
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
