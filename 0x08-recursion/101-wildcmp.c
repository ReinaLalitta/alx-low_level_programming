#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard pattern matching.
 * @s1: The first string to compare.
 * @s2: The second string with wildcard pattern.
 * Return: 1 if the strings match, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
	return (*s1 == '\0');
	}

	if (*s2 != '*')
	{
	if (*s1 != *s2)
	{
	return (0);
	}
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
