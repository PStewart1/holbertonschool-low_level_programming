#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_all - variadic function that prints multiple types
 * @format: string that contains specifiers
 *
 * Return: void
 */

void print_all(const char *format, ...)
{
	va_list args;
	int i = 0;
	void (*fp)(va_list);

    if(format == NULL)
        return;
	va_start(args, format);
	
	while (format[i])
	{
		fp = specifiercheck(&format[i]);
		if (!fp)
		{
		    i++;
		    continue;
		}
		
		fp(args);
		i++;
		printf(", ");
	}
	printf("\n");
	va_end(args);
}
