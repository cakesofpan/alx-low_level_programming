#include "main.h"

/**
 * coin - calculates change
 * @cents: amount of money entered
 *
 * Return: coins
 */
int coin(int cents)
{
	int change[] = {25, 10, 5, 2, 1};
	int nocoins = 0, t;

	for (t = 0; t < 5; t++)
	{
		while (cents >= change[t])
		{
			cents -= change[t];
			nocoins++;
		}
	}
	return (nocoins);
}

/**
 * main - prints the min no of coins to make change
 * @argc: number of arguments
 * @argv: arguments passed into the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int cents, res;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");

	else
	{
		res = coin(cents);
		printf("%d\n", res);
	}
	return (0);
}
