#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	char t;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	t = *argv[2];

	if ((t == '/' || t == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = func(num1, num2);
	printf("%d\n", res);
	return (0);
}
