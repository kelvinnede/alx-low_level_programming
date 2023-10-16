#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point for the keygen program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char password[100];

	srand(time(0));

	for (i = 0; i < 10; i++)
		password[i] = rand() % 94 + 33;

	password[i] = '\0';

	printf("%s\n", password);

	return (0);
}
