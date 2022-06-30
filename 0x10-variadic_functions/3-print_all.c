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

void print_all(const char *format, ...)
{
	va_list args;
	int i = 0;
	int skip;
	char c;
	int x;
	float f;
	char *str = malloc(100);

	va_start(args, format);
	while (format)
	{
		skip = 0;
		switch (format[i]) {
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				x = va_arg(args, int);
				printf("%d", x);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				strcpy(str, va_arg(args, char*));
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				break;
			default :
				skip = 1;
			}
		i++;
		if (format[i] && skip == 0)
			printf(", ");
	}
	printf("\n");
	va_end(args);
	free(str);
}
