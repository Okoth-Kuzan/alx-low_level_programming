#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at
 * a given index in a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to delete (starting from 0).
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	current = *head;
	prev = NULL;

	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}

