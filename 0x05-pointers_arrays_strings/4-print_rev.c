#include "main.h"

/**
 * print_rev - prints a string in regverse
 * @str: pointer to string
 *
 * Return: void
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
