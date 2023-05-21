#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Return: Always 0;
 */
int main(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		if (!(t == 'q' || t == 'e'))
			putchar(t);
	}
	putchar('\n');
	return (0);
}
