#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments
 * @ac: destination string
 * @av: string to be concatenated
 *
 * Return: pointer to new string, NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int t, q, arglen;
	int totallen = 0, current = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
		totallen += strlen(av[t]) + 1;

	result = malloc((totallen + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
	{
		arglen = strlen(av[t]);
		strcpy(result + current, av[t]);
		current += arglen;
		result[current++] = '\n';
	}

	result[current] = '\0';
	return (result);
}
