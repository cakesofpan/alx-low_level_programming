#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: no. of times \ should be printed
 *
 * Return: NULL
 */
void print_diagonal(int n)
{
	char diagonal = '\\';
	int t, size;/*distance to be moved from the margin;*/

	for (t = 0; t <= n; t++)
	{
		for (size = 0; size <= n; size++)
		{
			if (n > 0)
			{
				if (size == t)
					_putchar(diagonal);
				else
					_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
	_putchar('\n');
}
