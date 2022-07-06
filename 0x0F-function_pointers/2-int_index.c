#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - returns index of first int in array to fulfill function
 * @array: array to be operated on
 * @size: size of array
 * @cmp: function be called on
 * Return: index of int, otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size < 1)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
