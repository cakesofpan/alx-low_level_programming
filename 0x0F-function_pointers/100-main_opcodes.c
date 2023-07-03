#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own function
 * @argc: argument count
 * @argv: arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int t, bytes;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	arr = (char *)main;

	for (t = 0; t < bytes; t++)
	{
		if (t == bytes - 1)
		{
			printf("%02hhx\n", arr[t]);
			break;
		}
		printf("%02hhx", arr[t]);
	}
	return (0);
}
