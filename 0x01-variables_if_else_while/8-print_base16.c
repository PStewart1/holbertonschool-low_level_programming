#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints each "number" of base 16
 *
 * Return: 0, always succesful
 */

int main(void)
{
	int n;
	char ch;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
