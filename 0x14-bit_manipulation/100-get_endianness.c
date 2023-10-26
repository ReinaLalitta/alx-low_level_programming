#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 1 if little endian, 0 if big endian.
 */

int get_endianness(void)

{

	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
