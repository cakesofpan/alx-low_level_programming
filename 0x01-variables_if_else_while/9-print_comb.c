#include <stdio.h>

/**
 * main - prints all single digit numbers from 0
 *
 * Return: Always 0;
 */
int main(void)
{
	int t;

	for (t = 0; t < 10; t++)
	{
		putchar(48 + t);
		putchar(',');
	}
	putchar('$');
	putchar('\n');
	return (0);
}
