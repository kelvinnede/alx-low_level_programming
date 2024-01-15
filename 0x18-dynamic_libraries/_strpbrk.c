#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string.
 * @accept: Pointer to the set of characters to search for.
 *
 * Return: Pointer to the first occurrence in s of any character in accept,
 *         or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
		temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
				return s;

			temp++;
		}

		s++;
	}

	return (NULL);
}
