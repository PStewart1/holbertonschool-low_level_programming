#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: the size of the array
 * @c: the initial char
 *
 * Return: pointer to the array, or NULL if failed..
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
