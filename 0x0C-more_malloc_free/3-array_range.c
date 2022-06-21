#include "main.h"
#include <stdlib.h>

/**
 * _calloc - returns an  array, initialized to 0
 * @nmemb: number of elements
 * @size: size of elements
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
