#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins to
 *        make for a certain amount of money
 * @argc: The number of arguments supplied to the program.
 * @argv: Array of pointers to arguement.
 *
 * Return:not 1 otherwise 0.
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	coins = 0;

	while (cents >= 25)
	{
	coins++;
	cents -= 25;
	}

	while (cents >= 10)
	{
	coins++;
	cents -= 10;
	}

	while (cents >= 5)
	{
	coins++;
	cents -= 5;
	}

	while (cents >= 2)
	{
	coins++;
	cents -= 2;
	}

	coins += cents;

	printf("%d\n", coins);

	return (0);
}
