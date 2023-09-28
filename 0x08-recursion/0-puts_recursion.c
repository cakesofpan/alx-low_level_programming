#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 *
 * Return: NULL
 */
void _puts_recursion(char *s)
{
	int t = 0;

	if (s[t] != '\0')
		puts(s);
}
