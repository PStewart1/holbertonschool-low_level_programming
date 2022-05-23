#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints each letter from z to a
 *
 * Return: 0, always succesful
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
