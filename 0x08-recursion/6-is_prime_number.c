#include "main.h"

/**
 * check_prime - check if number is prime
 * @n: no to be checked
 * @t: no of iterations
 *
 * Return: 1 for prime or 0 composite
 */
int check_prime(int n, int t)
{
	if (n <= 1)
		return (0);

	if (n % t == 0 && t > 1)
		return (0);

	if ((n / t) < t)
		return (1);

	return (check_prime(n, t + 1));
}

/**
 * is_prime_number - returns 1 if prime number
 * @n: an int
 *
 * Return: 1 if prime, otehrwise 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
