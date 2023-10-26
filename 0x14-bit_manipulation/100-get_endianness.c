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
	union

	{
	int num;
	char c;
	}
	endian_test;

	endian_test.num = 1;

	return (endian_test.c == 1);
}
