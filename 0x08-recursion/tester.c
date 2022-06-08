#include "main.h"
#include <stdio.h>

/**
 * _sqrt - guesses sqrt with extra parameter
 * @k: guess for sqrt
 * @n: int to find sqrt for.
 *
 * Return: recursive call for itself
 */

int _sqrt(int k, int n)
{
	int nk = (k + n / k) / 2;
	long lk = k;

	printf("%d\n", k);
	if (k * k == n)
		return (k);
	else if ((lk * lk < n) && ((lk + 1) * (lk + 1) > n))
		return (-1);
	else
		return (_sqrt(nk, n));
}

/**
 * _sqrt_recursion - returns natural sqrt of n
 * @n: int to find sqrt for
 *
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

