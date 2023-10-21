#include "main.h"

/**
 * prime - checks for prime numbers
 * @n: no to be checked
 * @div: no of iterations
 *
 * Return: 1 if prime, else 0
 */
int prime(int n, int div)
{
	if (n <= 1)
		return (0);
	
	if (n % div == 0 && div > 1)
		return (0);

	if ((n / div) < div)
		return (1);
	
	return (prime(n, div + 1));
}

/**
 * is_prime_number - checks for prime numbers
 * @n: number to be checked
 *
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}
