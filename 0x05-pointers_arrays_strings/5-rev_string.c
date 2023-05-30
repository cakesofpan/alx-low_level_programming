#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a string
 *
 * Return: NULL
 */
void rev_string(char *s)
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
