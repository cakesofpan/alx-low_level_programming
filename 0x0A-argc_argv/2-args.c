#include <stdio.h>

/**
 * main - prints all its arguments
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: Always 0
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
