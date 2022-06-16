#include <stdio.h>

/**
 * main - Main program, prints ell its arguments
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
