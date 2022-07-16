#include "main.h"

/**
 * print_binary - prints out an int in binary
 * @n:int to be converted
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i = 63, startprinting = 0;
	unsigned long int num;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			printf("1");
			startprinting = 1;
		}
		else if (startprinting == 1)
			printf("0");
	}
}
