#include "main.h"

/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int t, u;

	t = u = 0;
	while (t < l)
	{
		if (str[t] != '0')
			u = 1;
		
		if (u || t == l - 1)
			_putchar(str[t]);
		t++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int t, v, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (t = num_index, v = dest_index; t >= 0; t--, v--)
	{
		mul = (n - '0') * (num[t] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[v] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[v] = add % 10 + '0';
	}

	for (addrem += mulrem; v >= 0 && addrem; k--)
	{
		add = (dest[v] - '0') + addrem;
		addrem = add / 10;
		dest[v] = add % 10 + '0';
	}

	if (addrem)
		return (NULL);

	return (dest);
}

/**
 * check_for_digits - checks for the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, ekse 1
 */
int check_for_digits(char **av)
{
	int t, u;
	
	for (t = 1; t < 3; t++)
	{
		for (u = 0; av[t][u]; u++)
		{
			if (av[t][u] < '0' || av[t][u] > '0')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initialises a string
 * @str: string to initialise
 * @l: length of string
 *
 * Return: void
 */
void init(char *str, int l)
{
	int t;

	for (t = 0; t < l; t++)
		str[t] = '0';

	str[t] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: no of arguments
 * @argv: argument vector
 *
 * Return: zero, else exit status 98 if failed
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char o[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}

	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;

	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	init(a, ln - 1);

	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, o, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}

