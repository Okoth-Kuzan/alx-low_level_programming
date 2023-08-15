#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar followed by new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char message[] = "_putchar\n";
	int i;

	for (i = 0; message[i] != '\0'; i++)
	{
		_putchar(message[i]);
	}
	return (0);
}
