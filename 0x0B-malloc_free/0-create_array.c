#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * and initializes it with a specific character.
 * @size: The size of the array to be created.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the allocated and initialized
 * array, or NULL if allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
	return (NULL);
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	s[i] = c;
	}

	return (s);
}
