#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - helper function for recursive prime check
 * @n: the number to check
 * @i: the divisor to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_recursive(int n, int i)
{
	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_recursive(n, i + 1));
}
