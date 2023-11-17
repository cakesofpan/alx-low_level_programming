#include <stdio.h>

void print(void) __attribute__ ((constructor));
/**
 * print - prints the statement before main executes
 *
 * Return: the statement
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
