#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long int num, lastnum, result, isPrime, j, k;
	long long int t = 612852475143;

	for (num = 2; num <= t; num++)
	{
		if (t % num == 0)
		{
			isPrime = 1;
			for (j = 2; j <= num / 2; j++)
			/*since prime nos start from 2 and they are always
            less than half the number(num/2)*/
			{
				if (num % j == 0)
				{
					isPrime = 0;
					break;
				}
			}

			if (isPrime == 1)
			{
				printf("%ld, ", num);
				lastnum = num;
			}
		}
	}
	printf("\n%ld", lastnum);
	return (0);
}
