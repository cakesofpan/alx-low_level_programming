#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string between numbers
 * @n: no. of integers
 *
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int t;

	va_list ap;

	va_start(ap, n);

	for (t = 0; t < n; t++)
	{
		if (t != n || separator != NULL)
			printf("%d%s", va_arg(ap, int), separator);

		else
			printf("%d\n", va_arg(ap, int));
	}
	va_end(ap);
}
