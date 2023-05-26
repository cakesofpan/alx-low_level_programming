#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: NULL
 */
void print_numbers(void)
{
	int t;

	for (t = 0; t < 10; t++)
		_putchar(48 + t);

	_putchar('\n');
}
