#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @t: integer to swap
 * @e: integer to swap
 */
void swap_int(int *t, int *e)
{
	int m;

	m = *t;
	*t = *e;
	*e = m;
}
