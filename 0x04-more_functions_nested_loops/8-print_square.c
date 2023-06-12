#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: NULL
 */
void print_square(int size)
{
	int t, c;

	for (t = 0; t < size; t++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
