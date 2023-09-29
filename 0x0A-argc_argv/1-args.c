#include "main.h"

/**
 * main - prints the no of arguments
 * @argc: number of arguments
 * @argv: arguments passed into the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int t;

	if (argc >= 0)
	{
		for (t = 0; t < argc; t++)
			printf("%s\n", argv[t]);
	}
	return (0);
}
