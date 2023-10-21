#include "main.h"

/**
 * create_array - creates an arracy of chars initializing with a char
 * @size: size of array
 * @c: char to be initialized
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int t;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (arr != NULL)
		return (NULL);

	for (t = 0; t < size; t++)
	{
		arr[t] = c;
	}

	return (arr);
}
