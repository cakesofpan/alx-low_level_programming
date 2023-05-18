#include <stdio.h>
#include <unistd.h>
/**
 * main - prints a string using write
 *
 * Return: 0
 */
int main(void)
{
	write(58, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 2);
	return (1);
}
