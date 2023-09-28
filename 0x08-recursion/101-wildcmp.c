#include "main.h"

/**
 * wild - compares and checks for identical strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if strings identical, else 0
 */
int wild(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
		return (wild(s1, s2 + 1) || (*s1 != '\0' && wild(s1 + 1, s2)));

	if (*s1 == *s2 || *s2 == '?')
		return (wild(s1 + 1, s2 + 1));

	return (0);
}

/**
 * wildcmp - calls the function
 * @s1: first string
 * @s2: second string
 *
 * Return: result
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp(s1, s2));
}
