#include "main.h"

/**
 * _strdup - returns allocated space with a copy of given string
 * @str: string to be copied
 *
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	char *dupstr;
	int s = 0, t = 1;

	if (str == NULL)
		return (NULL);

	while (str[t])
	{
		t++;
	}

	dupstr = malloc((sizeof(char) * t) + 1);

	if (dupstr == NULL)
		return (NULL);

	while (s < t)
	{
		dupstr[s] = str[s];
		s++;
	}
	dupstr[s] = '\0';
	free(dupstr);
	return (dupstr);
}
