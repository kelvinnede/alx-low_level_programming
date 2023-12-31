#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: Buffer to store the result
 * @size_r: Buffer size
 *
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, sum, i, j;

	for (len1 = 0; n1[len1]; len1++)
		;

	for (len2 = 0; n2[len2]; len2++)
		;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	carry = 0;

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';

		if (j >= 0)
			sum += n2[j] - '0';

		r[len1 + len2] = sum % 10 + '0';
		carry = sum / 10;

		len1++;
		len2++;
	}

	r[len1 + len2] = '\0';

	for (i = 0, j = len1 + len2 - 1; i < j; i++, j--)
	{
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}

	return (r);
}
