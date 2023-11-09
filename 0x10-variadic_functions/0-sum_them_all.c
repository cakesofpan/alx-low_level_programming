#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of its parameters
 * @n: no of arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int t = 0;
	int sum = 0;

	va_list add;

	va_start(add, n);
	for (t = 0; t < n; t++)
		sum += va_arg(add, int);

	if (n != 0)
		return (sum);

	else
		return (0);
	va_end(add);
}
