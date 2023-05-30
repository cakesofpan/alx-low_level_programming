#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array of integers
 * @a: the array
 * @n: no of elements to print
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);

		if (t != (n - 1))
			printf(", ");
	}
	printf("\n");
}
