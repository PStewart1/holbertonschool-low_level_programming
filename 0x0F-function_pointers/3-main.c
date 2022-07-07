#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Main program, prints sum of its arguments
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 if succesful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*result)(int, int);
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		return (98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		return (98);
	}
	s = argv[2];
	result = get_op_func(s);
	printf("%d\n", result(a,b));

	return (0);
}
