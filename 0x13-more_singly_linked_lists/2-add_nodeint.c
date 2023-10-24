#include "lists.h"

/**
 * add_nodeint - adds node to beginning of list
 *
 * @head: pointer to head pointer
 * which head points to the first node
 *
 * @n: new int. to be created
 *
 * Return: the head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (0);
}
