#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 *
 * Return: Always 0
 */
int main(void)
{
	char *p;
	int a, b;

	int (*f)(atoi(a), atoi(b));

	if (get_op_func(NULL))
	{
		p = "Error";
		_putchar(p);
		_putchar("\n");
		exit(99);
	}

	else if ("+")
	{
		f = get_op_func("+");
		putchar(f);
	}

	else if ("-")
	{
		f = get_op_func("-");
		putchar(f);
	}

	else if ("*")
	{
		f = get_op_func("*");
		putchar(f);
	}

	else if ("/")
	{
		f = get_op_func("/");
		putchar(f);
	}

	else if ("%")
	{
		f = get_op_func("%");
		putchar(f);
	}
	return (0);
}
