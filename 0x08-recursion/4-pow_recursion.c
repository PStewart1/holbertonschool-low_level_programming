#include "main.h"

/**
 * _pow_recursion - returns x raised to the power of y
 * @x: int to be factored
 * @y: power x is to be raised to
 *
 * Return: x ^ y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
