#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: memory containing bytes to be copied
 * @n: number of bytes to copy from src to dest
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
