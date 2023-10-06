#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
	return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
