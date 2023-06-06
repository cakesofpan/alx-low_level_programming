#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: an array
 *
 * Return: NULL
 */
void print_chessboard(char (*a)[8])
{
	int i, j, t = 8;

	for (i = 0; i < t; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
