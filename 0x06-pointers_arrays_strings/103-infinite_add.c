#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if result can't be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;

	while (n1[len1] != '\0')
		len1++;

	while (n2[len2] != '\0')
		len2++;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	n1 += len1 - 1;
	n2 += len2 - 1;
	r += size_r - 1;
	*r = '\0';

	len1--;
	len2--;

	while (len1 >= 0 || len2 >= 0)
	{
		sum = carry;

		if (len1 >= 0)
			sum += (*n1 - '0');

		if (len2 >= 0)
			sum += (*n2 - '0');

		carry = sum / 10;
		*r = (sum % 10) + '0';

		n1--;
		n2--;
		r--;
	}

	if (carry)
	{
		if (size_r == 1)
			return (0);
		*r = carry + '0';
	}
	else
		r++;

	return (r);
}
