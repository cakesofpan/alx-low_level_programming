#include <stdio.h>

/**
 * main - prints all single digit numbers from 0
 *
 * Return: Always 0;
 */
int main(void)
{
	int m = 0, t;

	for (; m <= 8; m++)
	{
		for (t = m + 1; t <= 9; t++)
		{
			putchar(m + '0');
			putchar(t + '0');

			if (m != 8 || t != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
