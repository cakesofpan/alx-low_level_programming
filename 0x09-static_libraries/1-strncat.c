#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: where resulting string is stored
 * @src: string to be copied
 * @n: no of bytes from src to be copied
 *
 * Return: pointer to dest (the resulting string)
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
