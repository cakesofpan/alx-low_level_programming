#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector (pointer to array of arguments)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int t, argvalue, u;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (t = 1; t < argc; t++)
	{
		for (u = 0; argv[t][u] != '\0'; u++)
		{
			if (!isdigit(argv[t][u]))
			{
				printf("Error\n");
				return (1);
			}
		}

		argvalue = atoi(argv[t]);
		sum += argvalue;
	}
	printf("%d\n", sum);
	return (0);
}
