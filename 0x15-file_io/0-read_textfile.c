#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX STDOUT
 *
 * @filename:text file that is read
 * @letters:the number of letters it should read
 * and print
 *
 * Return:0 if filename is NULL, unable to
 * open and read file and function fails
 * otherwise return the expected number of
 * bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *space;
	ssize_t fptr;
	ssize_t p;
	ssize_t q;

	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
	{
		return (0);
	}
	space = malloc(sizeof(char) * letters);
	p = read(fptr, space, letters);
	q = write(STDOUT_FILENO, space, p);

	free(space);
	close(fptr);
	return (q);
}
