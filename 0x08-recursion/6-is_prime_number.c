#include "main.h"

/*
 * is_prime_number - checks for prime numbers
 * @n: number to be checked
 *
 * Return: 1 if prime, else 0
 */
int prime(int n, int div)
{
	if (n <= 1)
		return (0);
	else if (div == 1)
		return (1);

	else if
	{
		if (n % div)
			return (0);
		else
			return (prime(n, div - 1);
	}
}

int is_prime_number(int n)
{
	return (prime(n, n - 1);
}
