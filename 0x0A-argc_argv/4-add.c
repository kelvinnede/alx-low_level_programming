#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string is a positive digit
 * @str: The string to check
 *
 * Return: 1 if true, 0 if false
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Adds positive numbers
 * @argc: The number of arguments
 * @argv: An array containing the program arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_digit(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
