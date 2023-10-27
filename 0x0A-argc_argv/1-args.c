#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: The number of arguments
 * @argv: An array containing the program arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
