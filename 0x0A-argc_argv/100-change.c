#include <stdio.h>
#include <stdlib.h>

/**
 * get_coins - Calculates the number of coins needed for a specific value.
 * @cents: The value in cents.
 * @coin_value: The value of the coin.
 *
 * Return: The number of coins needed.
 */
int get_coins(int *cents, int coin_value)
{
	int coins = 0;

	while (*cents >= coin_value)
	{
		coins++;
		*cents -= coin_value;
	}

	return (coins);
}

/**
 * main - Prints the minimum number of coins to make change.
 * @argc: The number of arguments.
 * @argv: An array containing the program arguments.
 *
 * Return: 0 (Success), 1 (Error).
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int coins = 0;

	coins += get_coins(&cents, 25);
	coins += get_coins(&cents, 10);
	coins += get_coins(&cents, 5);
	coins += get_coins(&cents, 2);
	coins += get_coins(&cents, 1);

	printf("%d\n", coins);

	return (0);
}
