#include <stdio.h>

/**
 * main - prints all single digit numbers from 0
 *
 * Return: Always 0;
 */
int main(void)
{
	int t;

	for (t = 0; t <= 25; t++)
		putchar(122 - t);
	putchar('\n');
	return (0);
}
