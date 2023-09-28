#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returns x to power y
 * @x: an integer
 * @y: n to be raised
 *
 * Return: -1 if y<0, else the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}