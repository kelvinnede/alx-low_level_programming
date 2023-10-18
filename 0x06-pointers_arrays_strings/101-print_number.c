#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	int divisor = 1;
	int i, temp, is_negative;

	is_negative = 0;

	if (n < 0)
	{
		_putchar('-');
		is_negative = 1;
	}

	temp = n;
	while (temp > 9 || temp < -9)
	{
		divisor *= 10;
		temp /= 10;
	}

	for (i = divisor; i >= 1; i /= 10)
	{
		_putchar(is_negative ? '0' - n / i : '0' + n / i);
		n %= i;
	}
}
