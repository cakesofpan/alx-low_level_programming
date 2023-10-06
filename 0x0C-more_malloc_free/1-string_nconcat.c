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
	size_t total;

	total = strlen(s1) + strlen(s2) + 2;
	joined = malloc(total);

	strcpy(joined, s1);

	if (n >= strlen(s2))
		strcat(joined, s2);

	else
		strncat(joined, s2, n);

	if (s2 == NULL)
		_putchar(' ');

	return (joined);
	free(joined);
}
