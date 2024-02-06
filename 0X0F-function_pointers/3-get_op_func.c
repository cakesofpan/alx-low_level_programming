#include "3-calc_h"

/**
 * op_add - adds a and b
 * @a: num 1
 * @b: num 2
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a and b
 * @a: num 1
 * @b: num 2
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: num 1
 * @b: num 2
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b
 * @a: num 1
 * @b: num 2
 *
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

        return (a / b);
}

/**
 * op_mod - gives remainder of a / b
 * @a: num 1
 * @b: num 2
 *
 * Return: modulus
 */
int op_mod(int a, int b)
{
        if (b == 0)
        {
		printf("Error\n");
		exit(100);
	}
	
	return (a % b);
}
