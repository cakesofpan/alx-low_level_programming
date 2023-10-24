#include <stdio.h>

/**
 * text - prints text before main function is executed
 *
 * Return: NULL
 */
void text(void) __attribute__((constructor));

void text(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!");
}
