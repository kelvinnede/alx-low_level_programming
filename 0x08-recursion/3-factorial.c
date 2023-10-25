#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of @n.
 *         -1 if @n is lower than 0 (indicating an error).
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
