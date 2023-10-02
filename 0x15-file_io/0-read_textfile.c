#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads and prints a text file to the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int t;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	t = open(filename, O_RDONLY);
	if (t == -1)
		return (0);
	bytes = read(t, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(t);
	return (bytes);
}

