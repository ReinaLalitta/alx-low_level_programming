#include "main.h"
#include <stdio.h>

/**
 * _memset - Entry point
 * @s: pointer to the memory area to be filled.
 * @b: the constant byte to fill with.
 * @n: number of bytes to be filled.
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;

	return (s);
}
