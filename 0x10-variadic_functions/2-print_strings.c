#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

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
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
		separator = "";
	va_start(args, n);
	for (i = 0; i < ((int)n - 1); i++)
	{
		str = va_arg(args, char*);
		if (str)
			printf("%s%s", str, separator);
		else
			printf("(nil)%s", separator);
	}
	str = va_arg(args, char*);
	if (str == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", str);
	va_end(args);
}
