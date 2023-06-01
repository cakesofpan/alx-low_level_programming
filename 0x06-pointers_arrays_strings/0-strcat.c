#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: where resulting string is stored
 * @src: string to be copied
 *
 * Return: pointer to dest (the resulting string)
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
