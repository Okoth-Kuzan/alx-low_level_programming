#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98\n");
		return;
	}

	printf("%d", n);

	if (n < 98)
	{
		print_to_98(n + 1);
	}
	else
	{
		print_to_98(n - 1);
	}
}
