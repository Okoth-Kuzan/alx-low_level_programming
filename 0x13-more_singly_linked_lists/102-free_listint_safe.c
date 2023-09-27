#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t num_nodes = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current)
	{
		num_nodes++;
		temp = current->next;

		if (current < temp)
		{
			free(current);
			current = NULL;
		}
		else
		{
			free(current);
			break;
		}

		current = temp;
	}

	*h = NULL;
	return (num_nodes);
}

