#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints each number from 0 to 9, using only putchar
 *
 * Return: 0, always succesful
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
