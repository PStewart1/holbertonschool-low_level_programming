#include <stdio.h>

/**
 * main - Main program, prints number of arguments
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
