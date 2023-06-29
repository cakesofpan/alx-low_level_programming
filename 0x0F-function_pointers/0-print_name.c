#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer (pointer to a function)
 * @char: parameter for f
 *
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
