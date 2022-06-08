#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals of a matrix
 * @a: pointer to matrix
 * @size: size of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, n;
	int sum1 = 0, sum2 = 0;

	for (i = 0, n = 0; n < size; i++, n++)
	{
		sum1 += a[i];
		i = i + (size);
	}
	printf("%d, ", sum1);

	for (i = (size - 1), n = 0; n < size; i++, n++)
	{
		sum2 += a[i];
		i = i + (size - 2);
	}
	printf("%d\n", sum2);
}
