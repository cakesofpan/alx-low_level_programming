#include "main.h"

/**
 * _sqrt - creates natural square root
 * @n: an int
 * @t: no. of iterations
 *
 * Return: square root
 */
int _sqrt(int n, int t)
{
	int sqrt;

	sqrt = t * t;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (t);

	return (_sqrt(n, t + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: a number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
