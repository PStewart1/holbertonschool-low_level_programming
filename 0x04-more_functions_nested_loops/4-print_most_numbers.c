#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9, except 2 & 4, follwed by new line
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
		}
		else
		{
		_putchar(i);
		}
	}

	_putchar('\n');
	return;

}
