#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int t, n, sum = 0;
	char *tally;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (t = 1; argv[t]; t++)
	{
		n = strtol(argv[t], &tally, 10);
		if (*tally)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
