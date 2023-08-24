#include "main.h"

/**
 * char *_strncat - concatenates two strings using n bytes frm src
 * @dest: destination string
 * @src: source string
 * @n: input value
 *
 * Return: o
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
