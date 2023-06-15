#include <stdio.h>

/**
 * main - prints the arguments passed into it
 * @argc: argument count
 * @argv: argument vector (pointer to array of arguments)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int t;

	for (t = 0; t < argc; t++)
	{
		printf("%s\n", argv[t]);
	}
	return (0);
}
