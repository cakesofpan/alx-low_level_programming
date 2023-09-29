#include "main.h"

/**
 * main - multiplies two integers
 * @argc: number of arguments
 * @argv: arguments passed into the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int t;
	long int result = 1, num;
	char *end;

	if (argc > 2)
	{
		for (t = 1; t < argc; t++)
		{
			num = strtol(argv[t], &end, 10);

			if (*end != '\0' || num < 0)
			{
				printf("Error\n");
				return (1);
			}
			result *= num;
		}

		printf("%ld\n", result);
	}
	else
		printf("0\n");

	return (0);
}
