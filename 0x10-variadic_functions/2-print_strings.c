#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string between the strings
 * @n: no of strings
 *
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	const char *str;

	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (t = 0; t < n; t++)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (t < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
