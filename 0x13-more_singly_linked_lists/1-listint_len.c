#include "lists.h"

/**
 * listint_len - counts the number of elements in an element
 *
 * @h: head pointer to the list
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
