#include "main.h"

/**
 * palindrome - checks for a palindrome
 * @s: string
 * @mwanzo: beginning of the string
 * @mwisho: end of the string
 *
 * Return: 1 if true, else 0
 */
int palindrome(char *s, int mwanzo, int mwisho)
{
	if (mwanzo >= mwisho)
		return (1);

	if (s[mwanzo] != s[mwisho])
		return (0);

	return (palindrome(s, mwanzo + 1, mwisho - 1));
}

/**
 * is_palindrome - checks for empty string
 * @s: string to be checked
 *
 * Return: 1 if true, else 0
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (len == 0)
		return (1);

	return (palindrome(s, 0, len - 1));
}
