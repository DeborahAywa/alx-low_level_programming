#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename:text file that is read
 * @letters:number of letters it should read and
 * print
 * Return:actual number of letters it should read and print
 * on success, and 0 if filename is NULL, when unable to
 * open and read file or write function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *space;
	ssize_t fptr, p, q;

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
