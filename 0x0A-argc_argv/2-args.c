#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: number of arguments
 * @argv: arguments passed into the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int t;

	for (t = 0; t < argc; t++)
		printf("%s\n", argv[t]);
	return (0);
}
