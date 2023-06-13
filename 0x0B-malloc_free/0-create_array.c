#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: size of the array
 * @c: character to be printed
 *
 * Return: pointer to the array, NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int t;

	arr = malloc(size * sizeof(char));
	if (arr != NULL)
	{
		for (t = 0; t < size; t++)
		{
			arr[t] = c;
			_putchar(arr[t]);
		}
	}

	else
		return (0);
	free(arr);
	return (arr);
}


