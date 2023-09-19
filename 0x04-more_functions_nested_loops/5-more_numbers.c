#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers ince 0 upto 14
 * Return: 10 times the numbers since 0 upto 14
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; x < 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
