#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints a string
 * @str: string
 *
 * Return: NULL
 */
void puts2(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; t++)
	{
		_putchar(str[t]);
		_putchar('\n');
	}
}
