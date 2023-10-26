#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - returns sum of all data
  * @head: ...
  *
  * Return: returns sum of all data
  */

int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
