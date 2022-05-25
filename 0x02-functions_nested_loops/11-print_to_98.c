#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all integers from n to 98
 * @n: int to be counted from
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d", n);
	}
	printf("\n");
}

