#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for a digit 0 through 9
 * @c: an integer
 *
 * Return: 1 if true, 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
