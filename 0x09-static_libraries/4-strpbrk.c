#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to the string to be searched.
 * @accept: pointer to the set of bytes to search for.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	if (strchr(accept, *s) != NULL)
	return (s);
	s++;
	}

	return (NULL);
}
