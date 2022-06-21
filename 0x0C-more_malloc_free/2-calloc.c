#include "main.h"
#include <stdlib.h>

/**
 * _calloc - returns an  array, initialized to 0
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned char *p;
	long i;
	long n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;
	arr = malloc(n);
	if (arr == NULL)
		return (NULL);

	p = arr;
	for (i = 0; i < n; i++)
		p[i] = 0;

	return (arr);

}
