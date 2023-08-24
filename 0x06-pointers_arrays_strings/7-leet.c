#include "main.h"
/**
 * leet - encodes a string into 1337
 * @t: input value
 * Return: t
 */
char *leet(char *t)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; t[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (t[i] == s1[j])
			{
				t[i] = s2[j];
			}
		}
	}
	return (t);
}
