#include <stdio.h>

/**
 * main - prints all possible different combos of three digits
 *
 * Return: Always 0;
 */
int main(void)
{
	int t, k;
	int m = 0;

	for (; m <= 7; m++)
	{
		for (t = m + 1; t <= 8; t++)
		{
			for (k = t + 1; k <= 9; k++)
			{
				putchar(m + '0');
				putchar(t + '0');
				putchar(k + '0');

				if (!(m == 7 && t == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
