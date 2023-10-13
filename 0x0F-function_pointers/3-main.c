#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	 int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    char operator = *argv[2];
	int result;

    if (argc != 4) {
        printf("Error\n");
        return (98);
    }

	if (operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != '%') {
        printf("Error\n");
        return (99);
    }

    if ((operator == '/' || operator == '%') && num2 == 0) {
        printf("Error\n");
        return (100);
    }

    if (operator == '+')
        result = op_add(num1, num2);
    else if (operator == '-')
	    result = op_sub(num1, num2);
    else if (operator == '*')
        result = op_mul(num1, num2);
    else if (operator == '/')
        result = op_div(num1, num2);
    else
        result = op_mod(num1, num2);

    printf("%d\n", result);

    return (0);
}
