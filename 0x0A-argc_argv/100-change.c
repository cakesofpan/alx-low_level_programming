#include <stdio.h>
#include <stdlib.h>

/**
 * main - min no of coins to make change
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int total, tally = 0;
	unsigned int t;
	char *s;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &s, 10);

	if (!*s)
	{
		while (total > 1)
		{
			for (t = 0; t < sizeof(cents[t]); t++)
			{
				if (total >= cents[t])
				{
					tally += total / cents[t];
					total = total % cents[t];
				}
			}
		}
		if (total == 1)
			tally++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", tally);
	return (0);
}
