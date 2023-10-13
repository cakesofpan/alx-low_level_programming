#include "3-calc.h"

/**
 * op_add - adds 2 numbers
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
 * op_sub - subtracts 2 numbers
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
 * op_mul - multiplies 2 numbers
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
 * op_div - divides 2 numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: division of the 2
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of dividing 2 numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: modulus of the 2
 */
int op_mod(int a, int b)
{
	return (a % b);
}
