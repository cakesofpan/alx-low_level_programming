#include "main.h"

/**
 * product - multiplies 2 numbers
 * @a: integer
 * @b: integer
 *
 * Return: the product
 */
int product(int a, int b)
{
	return (a * b);
}

/**
 * check_num - checks if the nums are digits
 * @num: integer to be checked
 *
 * Return: 0 if not int, 1 otherwise
 */
int check_num(char *num)
{
	while (*num)
	{
		if (!isdigit(*num))
			return (0);

		num++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, res, t;
	const char *error = "Error";

	if (argc != 3)
	{
		while (error[t] != '\0')
		{
			_putchar(error[t]);
			t++;
		}
		return (98);
	}

	if (!check_num(argv[1]) || !check_num(argv[2]))
	{
		while (error[t] != '\0')
		{
			_putchar(error[t]);
			t++;
		}
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	res = product(num1, num2);
	_putchar(res);
	return (0);
}
