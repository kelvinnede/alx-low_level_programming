#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 */
void _putchar(char c)
{
	putchar(c);
}

/**
 * print_error - Prints an error message and exits with status 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_digit - Checks if a string contains only digits
 * @str: The string to check
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
		if (*str < '0' || *str++ > '9')
			return (0);
	return (1);
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int i, j, len1 = 0, len2 = 0, *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	print_error();

	while (argv[1][len1])
	len1++;

	while (argv[2][len2])
		len2++;

	result = calloc(len1 + len2, sizeof(int));

	if (!result)
		print_error();

	for (i = len1 - 1; i >= 0; i--)
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (argv[1][i] - '0') * (argv[2][j] - '0');
			if (result[i + j + 1] > 9)
			{
				result[i + j] += result[i + j + 1] / 10;
				result[i + j + 1] %= 10;
			}
		}

	for (i = 0; i < len1 + len2 && result[i] == '0'; i++)
		;

	while (i < len1 + len2)
		_putchar(result[i++]);

	_putchar('\n');
	free(result);

	return (0);
}

