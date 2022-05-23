#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints each number from 0 to 9
 *
 * Return: 0, always succesful
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}

	printf("\n");

	return (0);
}
