#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @t: pointer
 *
 * Return: t
 */
char *string_toupper(char *t)
{
	int e;

	e = 0;
	while (t[e] != '\0')
	{
		if (t[e] >= 'a' && t[e] <= 'z')
			t[e] = t[e] - 32;
		e++;
	}
	return (t);
}
