#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: no of integers passed to the function
 *
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int t;

	va_list num;

	va_start(num, n);

	if (separator == NULL)
		separator = "";

	for (t = 0; t < n; t++)
	{
		printf("%d", va_arg(num, int));
		if (t < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
