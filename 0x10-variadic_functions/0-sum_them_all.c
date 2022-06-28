#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - variadic function that returns sum of all arguments
 * @n: number of arguments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
