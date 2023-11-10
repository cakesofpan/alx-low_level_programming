#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes
 * @a: address of main function
 * @n: no of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%.2hhx", a[t]);
		if (t < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints opcodes of its own main function
 * @argc: no of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
