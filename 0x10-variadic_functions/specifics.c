#include "variadic_functions.h"

void print_char(va_list c)
{
	if (!c)
		return;
	putchar((char)va_arg(c, int));
}

void print_str(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

void print_int(va_list i)
{
	int num = (int)va_arg(i, int);

	printf("%d", num);
}

void print_float(va_list i)
{
	float num = (float)va_arg(i, double);

	printf("%f", num);
}

void (*specifiercheck(const char *format))(va_list)
{
	unsigned int i;
	specifier p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	
	if (!format)
		return(NULL);
	for (i = 0; p[i].spec != NULL; i++)
	{
		if (*(p[i].spec) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}
