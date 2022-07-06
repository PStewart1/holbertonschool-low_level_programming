#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that operates another function on an array of ints
 * @array: array to be operated on
 * @size: size of array
 * @action: function be called on
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL || array == NULL || size < 1)
		return;
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
