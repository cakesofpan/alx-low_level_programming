#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: string to be joined to s1
 * @n: no. of bytes from s2 to join
 *
 * Return: s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *joined;
	size_t s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	joined = malloc((s1_len + n + 1) * sizeof(char));

	if (joined == NULL)
		return (NULL);

	strcpy(joined, s1);
	strncat(joined, s2, n);

	return (joined);
	free(joined);
}
