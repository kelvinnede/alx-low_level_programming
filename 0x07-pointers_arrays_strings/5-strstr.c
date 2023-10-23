#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the main string to search
 * @needle: the substring to locate
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *needle_ptr = needle;

		while (*needle_ptr && *haystack && (*haystack == *needle_ptr))
		{
			haystack++;
			needle_ptr++;
		}

		if (!*needle_ptr)
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
