#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * print_binary - Prints the binary representation of a number
  * @n: The number to representing in binary
  *
  * Return: Nothing
  */

void print_binary(unsigned long int n)

{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	recursive_divide(n);
}

/**
  * recursive_divide - Recursively divides the number by 2 prints the binary
  * @n: The number to be divided and printed
  *
  * Return: Nothing
  */

void recursive_divide(unsigned long int n)
{
	if (n < 1)
		return;

	recursive_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
