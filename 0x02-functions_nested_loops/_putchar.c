#include <unistd.h>

/**
 * _putchar - writes character to standard output
 * c - character to print
 *
 * Return: 1 (Success)
 * Return: -1 (Error)
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
