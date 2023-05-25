#include <stdio.h>
#include "main.h"
/**
 * main - prints the Fizz Buzz test (multiples of 3 = fizz, 0f 5 = buzz, of both =fizzbuzz
 *
 * Return: Always 0
 */
int main()
{
	int t;

	for (t = 1; t <= 100; t++)
	{
		if ((t % 3 == 0) && (t % 5 != 0))
			printf("Fizz ");

		else if ((t % 5 == 0) && (t % 3 != 0))
			printf("Buzz ");

		else if ((t % 3 == 0) && (t % 5 == 0))
			printf("FizzBuzz ");

		else
			printf("%d", t);
	}
	return (0);
}
