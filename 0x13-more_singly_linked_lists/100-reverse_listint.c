#include "lists.h"

/**
 * reverse_listint_recursive - Recursively reverses a listint_t linked list.
 * @current: Pointer to the current node.
 * @prev: Pointer to the previous node.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint_recursive(listint_t *current,
		listint_t *prev, listint_t **head)
{
	listint_t *next;

	if (current == NULL)
	{
		*head = prev;
		return (prev);
	}
	next = current->next;
	current->next = prev;

	return (reverse_listint_recursive(next, current, head));
}

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
    return (reverse_listint_recursive(*head, NULL, head));
}

