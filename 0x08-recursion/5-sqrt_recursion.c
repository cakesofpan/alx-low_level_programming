#include "main.h"
#include <math.h>

/**
 * _sqrt - returns the natural square root of a num
 * @n: an integer
 * @rannum: a random number
 *
 * Return: -1 if no root is found
 */
int _sqrt(int n, int rannum)
{
	if (n < 0)
		return (-1);

	if (rannum * rannum == n)
		return (rannum);

	if (rannum * rannum > n)
		return (-1);

	return (_sqrt(n, rannum + 1));
}

/**
 * _sqrt_recursion - starts the search with 0
 * @n: an integer
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion(n));
}
