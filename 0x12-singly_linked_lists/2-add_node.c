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
	list_t *new;
	unsigned int e = 0;

	while (str[e])
		e++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->e = e;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

