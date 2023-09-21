#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a singly linked list
 * @t: pointer to the list_t list to print
 *
 * Return: No of nodes printed
 */
size_t print_list(const list_t *t)
{
 size_t nodes = 0;

 while (t)
 {
 if (!t->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", t->len, t->str);
 t = t->next;
 nodes++;
 }

 return (nodes);
}
