#include "lists.h"

/**
 * add_node - adds new node at start of
 * linked lists
 * @head: ponter to th list(list_t)
 * @str: string to add node
 *
 * Return: Address of the new element(Success) or NULL(error)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *e = malloc(sizeof(list_t));

	if (!head || !e)
		return (NULL);
	if (str)
	{
		e->str = strdup(str);
		if (!e->str)
		{
			free(e);
			return (NULL);
		}
		e->len = _strlen(e->str);
	}

	e->next = *head;
	*head = e;
	return (e);
}
