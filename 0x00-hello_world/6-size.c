#include <stdio.h>
/**
 * main -  a C program that prints the size of various types on the computer it is compiled and run on
 * Return 0
 */
int main (void)
{
	char t;
	int e;
	long int r;
	long long int a;
	float n;

	printf("Size of a char: %lu byte(s)" sizeof(char));
	printf("Size of an int: %lu byte(s)" sizeof(int));
	printf("Size of a long int: %lu byte(s)" sizeof(long int));
	printf("Size of a long long int: %lu byte(s)" sizeof(long long int));
printf("Size of a float: %lu byte(s)" sizeof(float));
}
