#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 * Return: 1 (n is greater than zero) and prints +
 * 0 (n is zero) and prints 0
 * -1 (n is less than zero) and prints -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
