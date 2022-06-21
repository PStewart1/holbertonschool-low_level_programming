#include "main.h"
#include <stdlib.h>

/**
 * malloc_array - Creates an array of chars
 * @size: the size of the array
 * @c: the initial char
 *
 * Return: pointer to the array, or NULL if failed..
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (p == NULL)
		exit (98);

	return (p);
}
