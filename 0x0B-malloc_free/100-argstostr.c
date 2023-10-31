#include "main.h"

/**
 * argstostr - concatenates all arguments of mi program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string, else NULL
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int t, u, v, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
	{
		s = av[t];
		u = 0;

		while (s[u++])
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (t = 0, u = 0; u < ac && u < len; t++)
	{
		s = av[t];
		v = 0;

		while (s[v])
		{
			str[u] = s[v];
			v++;
			u++;
		}
		str[u++] = '\n';
	}
	str[u] = '\0';

	return (str);
}
