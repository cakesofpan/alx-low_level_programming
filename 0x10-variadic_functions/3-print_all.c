#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of arguments; c, i, f, s
 *
 * Return: NULL
 */
void print_all(const char * const format, ...)
{
	int t = 0, u = 0, v = 0;
	char *string;
	const char letters[] = "cifs";

	va_list print;

	va_start(print, format);

	while (format && format[t])
	{
		while (letters[u])
		{
			if(format[t] == letters[u] && v)
			{
				printf(", ");
				break;
			}
			u++;
		}
		switch (format[t])
		{
		case 'c':
			printf("%c", va_arg(print, int)), v = 1;
			break;
		case 'i':
                        printf("%d", va_arg(print, int)), v = 1;
                        break;
		case 'f':
                        printf("%f", va_arg(print, double)), v = 1;
                        break;
		case 's':
                        string = va_arg(print, char *), v = 1;
			if (!string)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
                        break;
		}
		t++;
	}
	printf("\n");
	va_end(print);
}
