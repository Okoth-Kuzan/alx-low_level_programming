#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination memory
 * @src: source memory
 * *@n: number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int e = n;

	for (; t < e; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
