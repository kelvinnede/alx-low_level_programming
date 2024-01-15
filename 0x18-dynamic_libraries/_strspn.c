#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring consisting of only
 *           characters in a given set.
 * @s: Pointer to the string.
 * @accept: Pointer to the set of characters to match.
 *
 * Return: Number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}

			accept++;
		}

		if (found)
			count++;
		else
			break;

		s++;
		accept = accept - count;
	}

	return (count);
}
