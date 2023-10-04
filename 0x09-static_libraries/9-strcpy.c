#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @src: pointer to the string to be copied
 * @dest: pointer to the destination
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
