#include <stdio.h>
/**
 * main - 'Entry point'
 * Description: 'Write a program that prints the lowercase alphabet in reverse, followed by a new line.'
 * Return: (0) (Success)
 */
int main(void)
{
	int n = 122;

	while (n >=  97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
