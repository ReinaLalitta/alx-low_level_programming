#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string,
 * or NULL if memory allocation fails.
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
	{
	return (NULL);
	}
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
