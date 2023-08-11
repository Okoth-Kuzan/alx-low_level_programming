#include <stdio.h>

/**
 * main - prints single digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%u", i);
	}
	putchar('\n');

	return (0);
}
