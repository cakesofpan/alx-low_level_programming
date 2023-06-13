#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to be copied
 *
 * Return: a pointer to duplicated string, else NULL
 */
char *_strdup(char *str)
{
	char *dup;

	dup = malloc(sizeof(char));

	if (str != NULL)
	{
		dup = strdup(str);
		return (dup);
	}

	else
		return (NULL);
	free(dup);
}

