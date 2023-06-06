#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to an area in memory
 * @b: byte to be filled in s
 * @n: number of bytes to replace with b
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, 'b', n * sizeof(int));
	return (s);
}
