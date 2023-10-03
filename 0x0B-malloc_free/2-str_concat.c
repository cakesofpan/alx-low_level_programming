#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: a string
 * @s2: string to be joined to s1
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *joined;

	joined = malloc(sizeof(char));
	strcpy(joined, s1);
	strcat(joined, s2);

	if (joined != NULL)
		return (joined);

	else
		return (NULL);

	return (joined);
	free(joined);
}
