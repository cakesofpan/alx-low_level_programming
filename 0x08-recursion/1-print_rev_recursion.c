#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int t = 0;

	if (*s == '\0')
		return;

	t--;
	puts(s);
}
