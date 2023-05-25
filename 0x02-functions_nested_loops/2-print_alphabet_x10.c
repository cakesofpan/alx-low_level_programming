#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 *
 * Return: NULL
 */
void print_alphabet_x10(void)
{
	char t;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
		}
		_putchar('\n');
	}
}
