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
	unsigned int t = 0, u = 0, v = 0, w = 0;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	while (s1[t])
		t++;

	while (s2[v])
		v++;

	if (n >= v)
		w = t + v;

	else
		w = t + n;

	joined = malloc(sizeof(char) * w + 1);
	if (joined == NULL)
		return (NULL);

	v = 0;
	while (u < w)
	{
		if (u <= t)
			joined[u] = s1[u];

		if (u >= t)
		{
			joined[u] = s2[v];
			v++;
		}
		u++;
	}
	joined[u] = '\0';
	return (joined);
}
