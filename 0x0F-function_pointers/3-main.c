#include "3-calc.h"

/**
 * main - gets the operator??
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*orpt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	orpt = get_op_func(argv[2]);

	if (!orpt)
	{
		printf("Error\n");
		exit(99);
	}
	
	printf("%d\n", orpt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
