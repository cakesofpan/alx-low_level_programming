#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a char (*s to be changed to a char)
 * @to: a pointer to a char
 *
 * Return: NULL
 */
void set_string(char **s, char *to)
{
	*s = to;
	return (0);
}
