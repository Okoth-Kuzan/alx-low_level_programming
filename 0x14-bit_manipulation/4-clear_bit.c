#include "main.h"

/**
 * clear_bit - Clears the bit at the specified index.
 * @n: Pointer to the unsigned long integer.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if successful, or -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
