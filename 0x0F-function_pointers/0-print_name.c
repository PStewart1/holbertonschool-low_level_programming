#include "function_pointers.h"

/**
 * print_name - function that passes a string to another function
 * @name: string to be passed
 * @f: pointer to other function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
