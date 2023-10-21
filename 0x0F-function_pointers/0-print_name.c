#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: a string
 * @f: pointer to a function taking char as parameter
 *
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	(*f) (name);

	while (*f == NULL)
		break;
}