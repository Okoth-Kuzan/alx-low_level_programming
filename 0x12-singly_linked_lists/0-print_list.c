#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to check lenghth
 *
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int e = 0;

	if (!s)
		return (0);
	while (*s++)
		e++;
	return (e);
}

/**
 * print_list - prints a linked lists
 * @h: pointer to first node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", (h->str ? h->len : 0), (h->str ? h->str : "(nil)"));
		h = h->next;
		count++;
	}

	return (count);
}
