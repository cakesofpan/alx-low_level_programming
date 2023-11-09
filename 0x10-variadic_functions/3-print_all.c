#include "variadic_functions.h"

/**
 * print_all - prints all its arguments
 * @format: specifies the necessary operations
 *
 * Return: NULL
 */
void print_all(const char * const format, ...)
{
	int t = 0, flag;
	char *str;

	va_list list;

	va_start(list, format);

	while (format != NULL && format[t] != '\0')
	{
		switch (format[t])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[t + 1] != '\0' && flag == 0)
			printf(", ");
		t++;
	}
	printf("\n");
	va_end(list);
}
