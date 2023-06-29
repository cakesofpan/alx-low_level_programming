#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func: selects the correct operations given
 * @s: operator
 *
 * Return: pointer to the function containing correct operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (ops[i] == NULL)
		return (NULL);

	else
		return (ops[i]);
}

