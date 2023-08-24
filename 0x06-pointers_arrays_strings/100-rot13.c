#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @t: pointer to string params
 *
 * Return: *t
 */

char *rot13(char *t)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; t[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (t[i] == data1[j])
			{
				t[i] = datarot[j];
				break;
			}
		}
	}
	return (t);
}
