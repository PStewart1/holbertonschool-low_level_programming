#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @c: va_list with a char
 */
void print_char(va_list c)
{
	if (!c)
		return;
	putchar((char)va_arg(c, int));
}

/**
  * print_str - prints a string
  * @s: va_list with a string
  */
void print_str(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
  * print_int - prints an int
  * @i: va_list with an int
  */
void print_int(va_list i)
{
	int num = (int)va_arg(i, int);

	printf("%d", num);
}

/**
  * print_float - prints a float
  * @i: va_list with a float
  */
void print_float(va_list i)
{
	float num = (float)va_arg(i, double);

	printf("%f", num);
}

/**
 * print_all - variadic function that prints multiple types
 * @format: string that contains specifiers
 *
 * Return: void
 */

void print_all(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	void (*fp)(va_list);
	specifier p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	if (format == NULL)
		return;
	va_start(args, format);
	while (format[i])
	{
		j = 0;
		while (p[j].spec != NULL)
		{
			if (*(p[j].spec) == format[i])
			{
				fp = (p[j].f);
				fp(args);
				printf(", ");
				switch (format[i + 1])
				{
				case '\0':
					break;
				default:
					printf(", ");
					break;
				}
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
