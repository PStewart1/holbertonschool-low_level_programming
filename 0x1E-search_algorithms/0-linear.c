#include "search_algos.h"

/**
 * linear_search - searches through an array using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value we're searching for
 * Return: the first index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int i, *pointer = array;

	if (!array)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *pointer);
		if (*pointer == value)
			return (i);

		pointer++;
	}
	return (-1);
}
