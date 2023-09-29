#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: arguments passed into the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int t;
	char *end;
	long int result = 0, num;

	if (argc > 1)
	{
		for (t = 1; t < argc; t++)
		{
			num = strtol(argv[t], &end, 10);

			if (*end != '\0' || num < 0)
			{
				printf("Error\n");
				return (1);
			}
			result += num;
		}
		printf("%ld\n", result);
	}

	else
		printf("0\n");

	return (0);
}
