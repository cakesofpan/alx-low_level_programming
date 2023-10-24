#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: no of integers to be printed
 *
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int t;

	va_list num;

	va_start(num, n);

	for (t = 0; t < n; t++)
	{
		if (separator == NULL || t == n - 1)
			printf("%d", va_arg(num, unsigned int));

		else
			printf("%d%s", va_arg(num, unsigned int), separator);
	}
	printf("\n");
	va_end(num);
}
