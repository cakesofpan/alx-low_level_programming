#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: an integer
 *
 * Return: -1 if no root is found
 */
int _sqrt_recursion(int n)
{
	double squ;

	squ = sqrt(n);
	if (fmod(squ, 1.0) != 0)
		return (-1);

	return (sqrt(n));
}
