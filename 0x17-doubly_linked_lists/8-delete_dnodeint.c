#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * at index of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (unsigned int i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	dlistint_t *next = current->next->next;

	free(current->next);
	current->next = next;

	if (next != NULL)
		next->prev = current;

	return (1);
}

