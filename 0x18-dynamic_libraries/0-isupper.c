#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: a character
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
