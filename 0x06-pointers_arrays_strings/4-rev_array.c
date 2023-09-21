#include "main.h"

/**
 * reverse_array - Reverses the content of anarray of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in an array.
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[index] = tmp;
	}
}
