#include "main.h"

/**
 * strdup - returns allocated space with a copy of given string
 * @str: string to be copied
 *
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	char *dupstr;

	dupstr = malloc(sizeof(char));

	if (str != NULL)
		dupstr = strdup(str);

	else
		return (NULL);

	return (dupstr);
	free(dupstr);
}
