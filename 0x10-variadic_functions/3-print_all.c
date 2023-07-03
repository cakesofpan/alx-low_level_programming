#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of arguments; c, i, f, s
 *
 * Return: NULL
 */
void print_all(const char * const format, ...)
{
	const char *result;
	char c;
	int i;
	float f;
	char *s;

	va_list print;

	va_start(print, format);

	result = format;
	while (*result != '\0')
	{
		if (*result == 'c')
		{
			c = (char)va_arg(print, int);
			printf("%c, ", c);
		}
		else if (*result == 'i')
		{
			i = va_arg(print, int);
			printf("%d, ", i);
		}
		else if (*result == 'f')
		{
			f = (float)va_arg(print, double);
			printf("%f, ", f);
		}
		else if (*result == 's')
		{
			s = va_arg(print, char*);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		result++;
	}
	va_end(print);
	printf("\n");
}
