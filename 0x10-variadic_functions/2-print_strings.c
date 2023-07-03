#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string between numbers
 * @n: no. of strings
 *
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	const char *str;

	va_list ap;

	va_start(ap, n);

	for (t = 0; t < n; t++)
	{
		str = va_arg(ap, const char *);

		if (str[t] == 0 || str[t] == '\0')
			printf("(nil)");

		if (t == n - 1 || separator == NULL)
			printf("%s", str);

		else
			printf("%s%s", str, separator);
	}
	printf("\n");
	va_end(ap);
}

