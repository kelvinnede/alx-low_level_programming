#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (*s != '\0')
	{
		length++;
		s++;
	}

	/* Print the string in reverse order */
	while (length > 0)
	{
		s--;
		_putchar(*s);
		length--;
	}

	_putchar('\n');
}
