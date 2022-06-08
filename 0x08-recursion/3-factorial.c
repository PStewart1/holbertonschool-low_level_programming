#include "main.h"

/**
 * factorial - returns factorial of given number
 * @n: int to be factored
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
