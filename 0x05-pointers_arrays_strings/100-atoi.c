#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: converted string
 */
int _atoi(char *s)
{
	int sign = 1, result = 0;
	int digit;

	while (*s == ' ')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	else if (*s == '+')
		s++;

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		result = result * 10 + digit;
		s++;
	}

	return (sign * result);
}
