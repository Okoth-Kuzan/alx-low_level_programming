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
	size_t e = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		e++;
	}
	return (e);
}
