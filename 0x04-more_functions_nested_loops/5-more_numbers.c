#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14, 10 times, follwed by new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (!(i / 10 == 0))
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}

	_putchar('\n');
	}

}
