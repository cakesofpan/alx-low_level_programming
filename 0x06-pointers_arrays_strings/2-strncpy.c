#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: where resulting string is stored
 * @src: string to be copied
 * @n: no of bytes from src to be copied
 *
 * Return: pointer to dest (the resulting string)
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
