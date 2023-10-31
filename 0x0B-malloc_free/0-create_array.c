#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: a character
 *
 * Return: pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int t;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		arr[t] = c;

	return (arr);
}
