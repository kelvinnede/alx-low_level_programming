#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to search for.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start, *sub;

	while (*haystack != '\0')
	{
		start = haystack;
		sub = needle;

		while (*haystack != '\0' && *sub != '\0' && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (*sub == '\0')
			return start;

		haystack = start + 1;
	}

	return (NULL);
}
