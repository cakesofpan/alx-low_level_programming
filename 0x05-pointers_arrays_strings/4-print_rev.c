#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string
 *
 * Return: NULL
 */
void print_rev(char *s)
{
	int t = 0, u = 0, temp;

	u = strlen(s) - 1;

	while (t < u)
	{
		temp = s[t];
		s[t] = s[u];
		s[u] = temp;
		t++;
		u--;
	}
}
