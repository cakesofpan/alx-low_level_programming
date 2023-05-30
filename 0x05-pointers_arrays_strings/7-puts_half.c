#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: a string
 *
 * Return: NULL
 */
void puts_half(char *str)
{
	int t, n, u, len;

	len = strlen(str);

	if (len % 2 == 0)
	{
		for (t = len / 2; t < len; t++)
			_putchar(str[t]);
	}

	else
	{
		n = len - 1;
		for (u = n / 2; u < n; u++)
			_putchar(str[u]);
	}
	_putchar('\n');
}
