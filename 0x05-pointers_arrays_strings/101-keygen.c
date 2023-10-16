#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 2772;
	int rand_num;

	srand(time(NULL));

	while (sum > 122)
	{
		rand_num = rand() % 125 + 1;
		putchar(rand_num);
		sum -= rand_num;
	}

	putchar(sum);

	return (0);
}
