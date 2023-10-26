#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - Deletes a node at a specific position.
  * @head: Pointer to the head of the list.
  * @index: Index of the node to be deleted.
  *
  * Return: 1 if successful, -1 otherwise.
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	unsigned int count = 1;
	listint_t *new = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (count == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}

		temp = temp->next;
		count++;
	}

	return (-1);
}
