#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 * @n: no. of parameters/arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int t;
	int sum = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (t = 0; t < n; t++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
