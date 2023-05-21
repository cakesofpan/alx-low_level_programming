#include <stdio.h>

/**
 * main - prints all single digit numbers from 0 using putchar
 *
 * Return: Always 0;
 */
int main(void)
{
	int t;

	for (t = 0; t < 10; t++)
		putchar(48 + t);
	putchar('\n');
	return (0);
}
