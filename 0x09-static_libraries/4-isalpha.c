#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: an integer 

 * Return: NULL
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
