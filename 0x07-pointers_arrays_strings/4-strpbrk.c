#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes matching another string
 * @s: a string
 * @accept: bytes to be checked in s
 *
 * Return: xcters in s matching accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *res;

	res = strpbrk(s, accept);

	if (res != NULL)
		return (res);

	else
		return (0);
}
