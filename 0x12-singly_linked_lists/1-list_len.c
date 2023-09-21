#include "lists.h"

/**
 * list_len -finds length of kinked lists
 * @h: pointer to node
 *
 * Return: No of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		h = h->next;
		e++;
	}
	return (e);
}
