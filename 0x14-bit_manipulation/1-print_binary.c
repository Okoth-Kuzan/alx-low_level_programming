#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	int bit_count = sizeof(n) * 8;
	int flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (bit_count > 0)
	{
		unsigned long int mask = 1UL << (bit_count - 1);

		if (n & mask)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			putchar('0');
		}

		bit_count--;
	}
}

