#include "3-calc.h"

/**
 * op_add - function that returns sum of 2 ints
 * @a: 1st int to be added
 * @b: 2nd int to be added
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns subtraction of 2 ints
 * @a: 1st int
 * @b: 2nd int to be subtracted
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns product of 2 ints
 * @a: 1st int to be multiplied
 * @b: 2nd int to be multiplied
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns division of 2 ints
 * @a: 1st int to be divided
 * @b: 2nd int
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder the division of 2 ints
 * @a: 1st int
 * @b: 2nd int
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
