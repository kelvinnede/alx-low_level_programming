#include "main.h"

/**
 * _strncpy - Copies up to n characters from the source string to the
 *            destination string. If the source string is less than n
 *            characters long, null bytes are appended to the end.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to the destination string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (original_dest);
}
