#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor for
 *
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long n)
{
	long i;

	for (i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}

	if (n > 1)
		return (n);

	return (i);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long num = 612852475143;
	long result;

	result = largest_prime_factor(num);

	printf("%ld\n", result);

	return (0);
}
