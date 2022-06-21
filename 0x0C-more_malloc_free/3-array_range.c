#include "main.h"
#include <stdlib.h>

/**
 * array_range - returns an  array of ints, form min to max
 * @min: first number of array
 * @max: last number of array
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, n = max - min;

	if (min > max)
		return (NULL);

	arr = malloc((n + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= n; i++)
		arr[i] = min + i;

	return (arr);

}
