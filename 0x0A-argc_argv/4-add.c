#include "main.h"
#include <string.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments passed into the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int t;
	unsigned int u, sum = 0;
	char *s;

	if (argc > 1)
	{
		for (t = 1; t < argc; t++)
		{
			s = argv[t];

			for (u = 0; u < strlen(s); u++)
			{
				if (s[u] < 48 || s[u] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(s);
			s++;
		}
		printf("%d\n", sum);
	}

	else
		printf("0\n");

	return (0);
}
