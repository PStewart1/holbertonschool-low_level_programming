#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects the correct function based on operator given
 * @s: operator to be selected
 * @a: int to operated on
 * @b: int to operated on
 * Return: pointer to function selected
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (*s == ops[i][0])
			return (ops[i][1](a, b));
		i++;
	}
	return (NULL);
}
