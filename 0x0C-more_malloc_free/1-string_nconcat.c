#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: string to be joined to s1
 * @n: no. of bytes from s2 to join
 *
 * Return: s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *joined;

	joined = malloc(sizeof(char));
	strcpy(joined, s1);

	if (n >= strlen(s2))
		strcat(joined, s2);

	else
		strncat(joined, s2, n);

	if (s2 == NULL)
		s2 = " ";

	return (joined);
	free(joined);
}
