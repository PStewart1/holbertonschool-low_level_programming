#include "main.h"

/**
 * prime - checks if prime number, with extra parameter
 * @i: check if denominator
 * @n: int to check if prime.
 *
 * Return: recursive call for itself
 */

int prime(int i, int n)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (prime(i + 1, n));
}

/**
 * is_prime_number - checks if prime number
 * @n: int to check if prime
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(2, n));
}

