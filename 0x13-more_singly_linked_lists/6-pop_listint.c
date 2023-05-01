#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (!head || !*head)
		return (0);

	node = (*head)->next;

	n = (*head)->n;

	free(*head);

	*head = node;

	return (n);
}
