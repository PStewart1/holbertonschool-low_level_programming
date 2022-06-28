#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_strings - variadic function prints all string arguments
 * @separator: separator between strings to be printed
 * @n: number of arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;
	char *str = malloc(100);
	char *sep = malloc(sizeof(separator) + 1);

	if (n == 0)
		return;

	if (separator)
		strcpy(sep, separator);
	else
		sep = "";

	va_start(args, n);
	for (i = 0; i < ((int)n - 1); i++)
	{
		strcpy(str, va_arg(args, char*));
		if (str)
			printf("%s%s", str, sep);
		else
			printf("(nil)%s", sep);
	}
	printf("%s\n", va_arg(args, char*));
	va_end(args);
	free(str);
	free(sep);
}
