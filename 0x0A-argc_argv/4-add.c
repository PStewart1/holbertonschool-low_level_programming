#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main program, prints sum of its arguments
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 if succesful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
