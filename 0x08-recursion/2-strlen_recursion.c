#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int t = 0;

	if (s[t] == '\0')
		return (0);

	return (strlen(s));
}
