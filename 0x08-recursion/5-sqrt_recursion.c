#include "main.h"
#include <stdio.h>

/**
 * sqrt_helper - Helper function to find the natural square root.
 * @n: The number to find the square root of.
 * @guess: The current guess.
 * Return: The square root if found, -1 otherwise.
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
	return (guess);
	}

	if (guess * guess > n)
	{
	return (-1);
	}

	return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of.
 * Return: The square root if found, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}

	return (sqrt_helper(n, 0));
}
