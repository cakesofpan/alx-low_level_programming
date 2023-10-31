#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string a
 * @s2: string b
 *
 * Return: pointer to memory with joint strings
 */
char *str_concat(char *s1, char *s2)
{
	char *joined;
	int t, u, len, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		t = 0;
		while (s1[t++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		t = 0;
		while (s2[t++] != '\0')
			len2++;
	}

	len = len1 + len2;
	joined = malloc(sizeof(char) * (len + 1));

	if (joined == NULL)
		return (NULL);

	for (t = 0; t < len1; t++)
		joined[t] = s1[t];

	for (u = 0; u < len2; u++, t++)
		joined[t] = s2[u];

	joined[len] = '\0';

	return (joined);
}
