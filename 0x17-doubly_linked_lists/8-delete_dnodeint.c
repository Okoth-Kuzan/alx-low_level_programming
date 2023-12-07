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
	unsigned int i;
	dlistint_t *current = *head;
	dlistint_t *temp;

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
	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next->next;
	free(current->next);
	current->next = temp;
	if (temp != NULL)
		temp->prev = current;
	return (1);
}

