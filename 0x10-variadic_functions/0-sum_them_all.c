#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all its arguments
 * @n: no of arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int t, sum = 0;
	va_list add;

	va_start(add, n);

	if (n == 0)
		return (0);

	for (t = 0; t < n; t++)
		sum += va_arg(add, unsigned int);

	va_end(add);
	return (sum);
}
