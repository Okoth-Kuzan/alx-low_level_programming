#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte_ptr = (unsigned char *)&num;

	if (*byte_ptr == 1)
		return (1);
	else
		return (0);
}

/**
 * main - start
 *
 * Return: 0 success
 */

int main(void)
{
	int endianness = get_endianness();

	if (endianness)
		printf("The system is little-endian.\n");
	else
		printf("The system is big-endian.\n");

	return (0);
}

