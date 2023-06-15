#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be checked
 * @needle: substring to be found in haystack
 *
 * Return: the located substring, otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *res;

	res = strstr(haystack, needle);

	if (res != NULL)
		return (res);

	else
		return (0);
}
