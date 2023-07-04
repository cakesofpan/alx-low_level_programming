#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: destination string
 * @s2: string to be joined to s1
 *
 * Return: pointer to s1, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *joined;

	joined = malloc(sizeof(char));

	if (s1 == NULL || s2 == NULL)
	{
		_putchar(' ');
	}
	strcpy(joined, s1);
	strcat(joined, s2);

	if (joined != NULL)
		return (joined);

	else
		return (0);
	free(joined);
}

