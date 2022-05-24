#include "main.h"

/**
 * times_table - prints 9 times table, starting from 0
 *
 * Return: void
 */

void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x * y > 9)
			{
				_putchar((x * y) / 10 + '0');
			}
			else
			{
				_putchar(' ');
			}

			_putchar((x * y) % 10 + '0');
			_putchar(',');
			_putchar(' ');
			}

		_putchar('\n');
	}
}

