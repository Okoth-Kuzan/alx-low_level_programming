#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - is the nomber positive,negative or zero
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0))
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%lu is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%lu is zero \n", n);
	}
	else
	{
		printf("%lu is negative\n", n);
	}
	return (0);
}
