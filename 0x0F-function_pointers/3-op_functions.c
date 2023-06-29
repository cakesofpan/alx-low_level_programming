#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: value 1
 * @b: value 2
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - minuses a and b
 * @a: value 1
 * @b: value 2
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: value 1
 * @b: value 2
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b
 * @a: value 1
 * @b: value 2
 *
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder of  a / b
 * @a: value 1
 * @b: value 2
 *
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
