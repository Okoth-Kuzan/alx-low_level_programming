#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: pointer to 1st node
 *
 * Return:  number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t e = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		e++;
	}
	return (e);
}
