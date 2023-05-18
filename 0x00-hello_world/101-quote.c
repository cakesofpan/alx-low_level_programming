#include <stdio.h>
#include <unistd.h>
/**
 * main - prints a string using write
 *
 * Return: 0
 */
int main(void)
{
	return(write(59, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 1));
}
