#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of strings
 *
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int len = 0, index = 0, t;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
	{
		if (av[t])
			len += strlen(av[t]) + 1;
	}

	result = malloc(len + 1);

	if (result == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
	{
		if (av[t])
		{
			strcpy(result + index, av[t]);
			index += strlen(av[t]);
			result[index] = '\n';
			index++;
		}
	}
	result[index] = '\0';

	return (result);
}
