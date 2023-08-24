#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int e;
	int t;

	for (e = 0; e < n--; e++)
	{
		t = a[e];
		a[e] = a[n];
		a[n] = t;
	}
}
