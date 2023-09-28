#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int tally = 0;

	if (s[tally] != '\0')
		tally++;

	return (tally);
}
