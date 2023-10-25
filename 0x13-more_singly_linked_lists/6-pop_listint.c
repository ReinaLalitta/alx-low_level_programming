#include "lists.h"

/**
 * pop_listint - dleletes first node of a list and
 * returns its data
 * @head: the pointer to the list
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
