#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: no of strings to be printed
 *
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int t;

	va_list str;

	va_start(str, n);

	for (t = 0; t < n; t++)
	{
		if (separator == NULL || t == n - 1)
			printf("%d", va_arg(str, unsigned int));

		else
			printf("%d%d", va_arg(str, unsigned int), separator);
	}
	printf("\n");
	va_end(str);
}
