#include <stdio.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to the binary string (0 and 1 chars).
 *
 * Return: The converted number, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) | (*b - '0');
	}
	return (result);
}

