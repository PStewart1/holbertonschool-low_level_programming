#include "holberton.h"

/**
 * reverse_array - reverses an array of ints
 * @a: pointer to array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, --n; i < n; i++, n--)
	{
		j = a[n];
		a[n] = a[i];
		a[i] = j;
	}
}
