#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords
 *
 * Return: Always 0
 */

int main(void)
{
	srand(time(NULL));

	char password[12];
const char valid_chars[] =
	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	for (int i = 0; i < 11; i++)
	{
	password[i] = valid_chars[rand() % 62];
	}
	password[11] = '\0';

	printf("%s\n", password);

	return (0);
}
