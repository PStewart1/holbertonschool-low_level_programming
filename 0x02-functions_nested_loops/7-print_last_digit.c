#include "main.h"

/**
 * print_last_digit - prints and rerturns last digit of int
 * @n: int to return last digit of
 *
 * Return: last integer digit of int n
 */

int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
	{
		r = -r;
	}

	_putchar('0' + r);
	return (r);
}

