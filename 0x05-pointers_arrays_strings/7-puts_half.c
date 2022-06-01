#include "main.h"

/**
 * puts_half - prints 2nd half of string
 * @s: pointer to string
 *
 * Return: void
 */

void puts_half(char *s)
{
	int i, n = 0;

	while (s[n] != '\0')
		++n;

	for (i = (n - (n / 2)); i < n; ++i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
