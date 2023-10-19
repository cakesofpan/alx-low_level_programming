#include <stdio.h>

void text(void) __attribute__((constructor));

void text(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
