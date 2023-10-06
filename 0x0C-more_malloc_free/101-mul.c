#include "main.h"

/*
 * number - checks if string contains only digits
 * @s: string to be checked
 *
 * Return: true
 */
bool number(char *s)
{
	while (*s)
	{
		if (!isdigit(s))
			return (false);

		s++;
	}
	return (true);
}

/**
 * mul - multiplies 2 positive nums
 * @num1: an int
 * @num2: another int
 *
 * Return: the result
 */
long int mul(long int num1, long int num2)
{
	return (num1 * num2);
}

/**
 * main - prints the result
 * @argc: argument count
 * @argv: no of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	long int num1, num2, result;

	str1 = argv[1];
	str2 = argv[2];
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!number(str1) || !number(str2))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoll(str1);
	num2 = atoll(str2);
	result = mul(num1, num2);

	printf("%ld\n", result);

	return (0);
}
