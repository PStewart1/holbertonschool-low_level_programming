#include "main.h"

/**
 * print_line - prints a straight line of varying length
 * @n: length of line
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');

	_putchar('\n');
	return;

}
