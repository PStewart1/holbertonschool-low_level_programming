#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list c);
void print_str(va_list s);
void print_int(va_list i);
void print_float(va_list i);
void (*specifiercheck(const char *format))(va_list);

/**
 * struct print - structure for printing various types
 * @spec: specifier char
 * @f: print function
 */
typedef struct print
{
	char *spec;
	void (*f)(va_list);
} specifier;

void print_all(const char * const format, ...);


#endif /* VARIADIC_FUNCTIONS_H */
