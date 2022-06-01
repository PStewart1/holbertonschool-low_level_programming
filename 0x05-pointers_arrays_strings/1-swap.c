#include "main.h"

/**
 * swap_int - swaps the value of to pointers
 * @a: first integer pointer
 * @b: second integer pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
