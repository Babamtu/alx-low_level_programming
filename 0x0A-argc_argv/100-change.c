#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * make_change - Calculates the minimum number coins to make change
 * @cents: amount of cents to make change for
 * Return: The minimum number of coins needed to make change
 */

int make_change(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			num_coins++;
		}
	}
	return (num_coins);
}

/**
 * main - The main function of the program.
 * @argc: The number of command-line arguments passed to the program.
 * @argv:  An array of strings containing the command-line arguments passed
 * Return: 0 success, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", make_change(cents));
	}

	return (0);
}
