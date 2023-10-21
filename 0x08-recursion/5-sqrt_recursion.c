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
	int root;

	root = rannum * 1;
	if (root > n)
		return (-1);

	if (root == n)
		return (rannum);

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
	return (_sqrt(n, 1));
}
