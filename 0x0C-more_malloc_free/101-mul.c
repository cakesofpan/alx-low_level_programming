#include "main.h"

/*
 * number - checks if string contains only digits
 * @s: string to be checked
 *
 * Return: 0 if non-digit, 1 otherwise
 */
int number(char *s)
{
	int t = 0;
	while (s[t])
	{
		if (s[t] < '0' || s[t] > '9')
			return (0);

		t++;
	}
	return (1);
}

/**
 * _strlen - returns length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int t = 0;

	while (s[t] != '\0')
	{
		t++;
	}
	return (t);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
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
	long int len, len1, len2, t, carry, num1, num2, *result, a = 0;

	str1 = argv[1];
	str2 = argv[2];

	if (argc != 3 || !isdigit(str1) || !isdigit(str2))
		errors();

	len1 = _strlen(str1);
	len2 = _strlen(str2);
	len = len1 + len2 + 1;

	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	
	for (t = 0; t <= len1 + len2; t++)
		result[t] = 0;

	for (len1 = len1 - 1; len1 >= 0; len--)
	{
		num1 = str1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(str2) - 1; len2 >= 0; len2--)
		{
			num2 = str2[len2] - '0';
			carry += result[len1 + len2 + 1] + (num1 * num2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}

	for (t = 0; t < len - 1; t++)
	{
		if (result[t])
			a = 1;

		if (a)
			_putchar(result[t] + '0');
	}
	if (!a)
		_putchar('0');

	_putchar('\n');
	free(result);

	return (0);
}
