#include "main.h"

/**
 * _puts - Prints a string to the standard output followed by a new line.
 * @s: Pointer to the string to be printed.
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
