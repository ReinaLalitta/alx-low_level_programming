#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - Reverses a listint_t linked list.
  * @head: Pointer to a pointer to the head of the list.
  *
  * Return: Pointer to the new head of the reversed list.
  */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *prev = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}

		*head = prev;
		return (*head);
	}

	return (NULL);
}
