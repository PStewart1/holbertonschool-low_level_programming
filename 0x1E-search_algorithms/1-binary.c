#include "search_algos.h"

/**
 * binary_search - searches through an array using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value we're searching for
 * Return: the index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int i, L = 0, R = (int)size - 1, M, *pointer = array;

	if (!array)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array:");
		for (i = L; i <= R; i++)
		{
			printf(" %d", pointer[i]);
			if (i != R)
				printf(",");
			else
				printf("\n");
		}
		M = (L + R) / 2;
		if (pointer[M] < value)
			L = M + 1;
		else if (pointer[M] > value)
			R = M - 1;
		else
			return (M);
	}

	return (-1);
}
