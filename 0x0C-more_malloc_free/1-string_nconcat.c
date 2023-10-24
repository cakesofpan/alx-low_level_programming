#include "main.h"

/**
 * string_nconcat - concatenates(joins) two strings
 * @s1: first string
 * @s2: second string
 * @n: no of bytes to concatenate from s2
 *
 * Return: newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *joined;
	unsigned int t, u, v;

	if (s1 == NULL)
		t = 0;

	else
	{
		for (t = 0; s1[t] != '\0'; t++)
			;
	}

	if (s2 == NULL)
		u = 0;

	else
	{
		for (u = 0; s2[u] != '\0'; u++)
			;
	}
	if (u > n)
		u = n;

	while (s1[t])
		t++;

	joined = malloc(sizeof(char) * (t + u + 1));
	if (joined == NULL)
		return (NULL);

	for (v = 0; v < t; v++)
		joined[v] = s1[v];

	for (v = 0; v < u; v++)
		joined[v + t] = s2[v];

	joined[t + u] = '\0';

	return (joined);
}
