#include "main.h"

/**
 * print_alphabet - Uses _putchar to print out the alphabet, lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

