#include "lists.h"

/* This function will be executed before main */
void print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - Prints the desired text before main function execution.
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
