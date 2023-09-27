#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t num_nodes = 0;
	int loop_detected = 0;

	slow = fast = head;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		num_nodes++;

		if (slow == fast)
		{
			loop_detected = 1;
			break;
		}
	}

	if (loop_detected)
	{
		slow = head;

		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			fast = fast->next;
			num_nodes++;
		}

		printf("-> [%p] %d\n", (void *)slow, slow->n);
	}

	return num_nodes;
}

