#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: NULL
 */
void print_alphabet(void);
{
	char t;
	for t = 'a'; t <= 'z'; t++)
		_putchar(t);

	_putchar('\n');
	return (0);
}
