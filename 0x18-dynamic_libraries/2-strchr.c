#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: a character
 *
 * Return: first occurence of c
 */
char *_strchr(char *s, char c)
{
	char *res;

	res = strchr(s, c);

	if (res != NULL)
		return (res);

	else
		return (0);
}
