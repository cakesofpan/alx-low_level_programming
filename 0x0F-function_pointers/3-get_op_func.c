#include "3-calc.h"

/**
 * get_op_func - selects correct function to perform operation
 * @s: pointer to a function taking two ints as parameters
 *
 * Return: correct operation
 */
int (*get_op_func(char *s))(int, int)
{
	int t = 0;

	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};

	while (t < 5)
	{
		if (strcmp(s, ops[t].op) == 0)
			return (ops[t].f);

		t++;
	}
	return (0);
}
