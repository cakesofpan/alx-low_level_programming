#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a straight line
 * @n: no. of times to print the character _
 *
 * Return: NULL
 */
void print_line(int n)
{
	int t;

	for (t = 1; t <= n; t++)
	{
		if (n <= 0)
			_putchar('\n');

		else
			_putchar('_');
	}
	_putchar('\n');
	return (0);
}
