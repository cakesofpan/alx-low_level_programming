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
	long int result;

	if (argc > 1)
	{
		for (t = 1; t < argc; t++)
		{
			if (argc == 3)
			{
				result = atoi(argv[1]) * atoi(argv[2]);
				printf("%ld\n", result);
			}

			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (0);
}
