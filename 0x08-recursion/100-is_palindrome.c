#include "main.h"

/**
 * string_length - Helper function to calculate the length of a string.
 * @s: The string to calculate the length of.
 * Return: The length of the string.
 */
int string_length(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + string_length(s + 1));
}

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @len: The length of the string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int len)
{
	if (len <= 1)
	return (1);

	if (s[0] != s[len - 1])
	return (0);

	return (is_palindrome_helper(s + 1, len - 2));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = string_length(s);

	return (is_palindrome_helper(s, len));
}
