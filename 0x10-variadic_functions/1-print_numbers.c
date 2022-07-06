#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_numbers - variadic function  prints all int arguments
 * @separator: separator between numbers tobe printed
 * @n: number of arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < ((int)n - 1); i++)
		if (separator)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));

	printf("%d\n", va_arg(args, int));
	va_end(args);
}
