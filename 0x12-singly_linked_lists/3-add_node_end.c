#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @str: the giving string
 * Return: the length of a string
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0, i = 0;

	while (str[i++])
		len++;
	return (len);
}
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to the first element of the list
 * @str: string to be duplicate in the new node str
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current = *head;

	while (current && current->next != NULL)
		current = current->next;
	new = malloc(sizeof(list_t *));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	if (current)
		current->next = new;
	else
		*head = new;
	return (new);
}
