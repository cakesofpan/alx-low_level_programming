#include <stdio.h>

/**
 * main - prints no. of arguments
 * @argc: argument count
 * @argv: argument vector (pointer to array of arguments)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int t;

	(void)argv;
	for (t = 0; t < argc - 1; t++)
	{
	}

	printf("%d\n", t);

	return (0);
}
