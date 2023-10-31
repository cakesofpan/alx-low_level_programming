#include "main.h"

/**
 * _strdup - returns new memory containing string copy
 * @str: string to be copied
 *
 * Return: pointer to new memory
 */
char *_strdup(char *str)
{
	char *dupstr;
	int t, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dupstr = malloc((sizeof(char) * len) + 1);
	if (dupstr == NULL)
		return (NULL);

	for (t = 0; t < len; t++)
		dupstr[t] = str[t];

	dupstr[len] = '\0';

	return (dupstr);
}
