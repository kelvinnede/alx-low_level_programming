#include "main.h"

/**
 * _putchar - Writes a character to standard output
 * @c: The character to write
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
