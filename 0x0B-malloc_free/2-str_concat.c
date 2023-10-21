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
	int totallen, len1 = 0, len2 = 0, t, u;
	char *joined;

	if (s1 == NULL)
	{
		t = 0;
		while (s1[t++] != '\0')
			len1++;
	}

	if (s2 == NULL)
	{
		t = 0;
		while (s2[t++] != '\0')
			len2++;
	}

	totallen = len1 + len2;
	joined = malloc(sizeof(char) * (totallen + 1));

	if (joined == NULL)
	{
		free(joined);
		return (NULL);
	}

	for (t = 0; t < len1; t++)
	{
		joined[t] = s1[t];
	}

	for (u = 0; u <= len2; u++)
	{
		joined[t] = s2[u];
	}
	joined[totallen] = '\0';
	free(joined);
	return (joined);
}
