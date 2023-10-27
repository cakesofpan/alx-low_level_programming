#include <stdio.h>

/**
 * main - prints no of arguments
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
