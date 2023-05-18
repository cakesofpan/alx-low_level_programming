#include <stdio.h>

/**
 * main - prints the size of various data types
 *
 * Return: 0
 */
int main(void)
{
	char tchar;
	int tint;
	long int tlongint;
	long long int tlonglongint;
	float tfloat;

	printf("Size of a char: %zu byte(s)\n", sizeof(tchar));
	printf("Size of an int: %zu byte(s)\n", sizeof(tint));
	printf("Size of a long int: %zu byte(s)\n", sizeof(tlongint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(tlonglongint));
	printf("Size of a float: %zu byte(s)\n", sizeof(tfloat));
	return (0);
}
