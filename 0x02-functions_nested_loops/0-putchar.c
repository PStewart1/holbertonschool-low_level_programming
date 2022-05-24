#include "main.h"

/**
 * main - Uses _putchar to iterate over a string
 *
 * Return: 0, always succesful
 */

int main(void)
{
	char ch[] = "_putchar\n";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(ch[i]);
	}

	return (0);
}

