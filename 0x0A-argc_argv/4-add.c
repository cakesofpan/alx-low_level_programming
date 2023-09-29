#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments passed into the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int t, argvalue;
	int sum = 0;

	if (argc > 1)
	{
		for (t = 1; t < argc; t++)
		{
			argvalue = atoi(argv[t]);
			if (argvalue == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += argvalue;
		}
		printf("%d\n", sum);
	}

	else
		printf("0\n");
	return (0);
}