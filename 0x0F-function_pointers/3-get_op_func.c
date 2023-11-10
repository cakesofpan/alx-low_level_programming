#include "3-calc.h"

/**
 * get_op_func - choosing an operator for the function
 * @s: operator to be choosed
 *
 * Return: operator??
 */
int (*get_op_func(char *s))(int, int)
{
	int t = 0;

	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ NULL, NULL }
	};

	while (t == 0)
	{
		if (strcmp(s, ops[t].op) == 0)
			return (ops[t].f);

		t++;
	}

	return (0);
}
