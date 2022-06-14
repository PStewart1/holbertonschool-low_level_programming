#include <stdio.h>

/**
 * main - Main program, prints its own name
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
