#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of ints
 * @a: array of ints
 * @n: number of elemetns to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	--n;
	for (i = 0; i <= n; ++i)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
