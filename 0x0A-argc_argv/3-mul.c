#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector (pointer to array of arguments)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int t;
	long int result;

	if (argc == 1 || argc > 2)
	{
		for (t = 0; t < argc; t++)
		{
			result = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%ld\n", result);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
