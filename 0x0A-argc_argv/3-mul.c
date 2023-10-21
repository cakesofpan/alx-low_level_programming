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
	int num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
