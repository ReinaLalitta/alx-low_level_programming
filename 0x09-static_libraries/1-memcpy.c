#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: pointer to the destination memory area.
 * @src: pointer to the source memory area.
 * @n: number of bytes to be copied.
 *
 * Return: a pointer to the memory area `dest`.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];

	return (dest);
}
