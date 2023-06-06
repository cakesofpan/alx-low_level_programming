#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - gets the length of a specified substring in another string
 * @s: entire string
 * @accept: bytes to be checked in s
 *
 * Return: no of bytes from accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
	char *res;

	res = strspn(s, accept);
	return (res);
}
