#include "lists.h"

/**
 * _strlen - returns length of a string
 * @s: the string whose length to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int t = 0;

	if (!s)
		return (0);
	while (*s++)
		t++;
	return (t);
}

/**
 * print_list - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		t++;
	}
	return (t);
}
