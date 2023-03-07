#include "search_algos.h"

/**
 * recursive_search - searches through an array using a recursive Binary search
 * @pointer: pointer to the first element of the array to search in
 * @L: left side of subarray to search through
 * @R: right side of subarray to search through
 * @value: value we're searching for
 * Return: the index where the value is located
 */
int recursive_search(int *pointer, int L, int R, int value)
{
	int i, M = (L + R) / 2, result = -1;

	if (R - L < 0)
		return (-1);

	printf("Searching in array:");
	for (i = L; i <= R; i++)
	{
		printf(" %d", pointer[i]);
		if (i != R)
			printf(",");
		else
			printf("\n");
	}

	if (pointer[M] < value)
		result = recursive_search(pointer, M + 1, R, value); /** L = M + 1; */
	else if (pointer[M] > value)
		result = recursive_search(pointer, L, M, value); /**R = M - 1;*/
	else if (pointer[M] == value)
	{
		if (pointer[M - 1] < value || M == 0)
		{
			return (M);
		}
		else
			result = recursive_search(pointer, L, M, value);
	}

	return (result);
}


/**
 * advanced_binary - searches through an array using a recursive Binary search.
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value we're searching for
 * Return: the index where the value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	int L = 0, R = (int)size - 1, result, *pointer = array;

	if (!array)
		return (-1);

	result = recursive_search(pointer, L, R, value);

	return (result);
}
