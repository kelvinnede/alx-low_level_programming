#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array containing the command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
