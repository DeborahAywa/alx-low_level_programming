#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * creates_space - function that allocates 1024 bytes
 * for a buffer
 *
 * @file: name of file where characters are stored
 * Return:pointer to newly created space
 */

char *create_space(char *file)
{
	char *size;

	size = malloc(sizeof(char) * 1024);
	if (size == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (size);
}

/**
 * close_file - function that closes file
 * @fptr:file descriptor to be closed
 */

void close_file(int fptr)
{
	int p = 0;

	if (p == -1)
	{
		dprintf(STDERR_FILENO, ERROR_CLOSE_FAILURE, fptr), exit(100);
	}
}

/**
 * main - copies the contents of a file to another file
 * @argc:the number of arguments supplied to the program
 * @argv:an array of pointers to the arguments
 *
 * Return:0 on success
 *
 * Description:if the argument code is incorrect - exit code 97
 * incase file_from does not exist or can't be read - exit code 98
 * incase file_to can't be created or written - exit code 99
 * Unable to close file_from or file_to - exit code 100
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *size;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE), exit(97);
	}
	size = create_space(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, size, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, PERMISSIONS);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, ERROR_READ_FAILURE, argv[1]), exit(98);
			free(size);
		}

		w = write(to, size, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, ERROR_WRITE_FAILURE, argv[2]), exit(99);
			free(size);
		}
		r = read(from, size, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	{
		free(size);
		close_file(from);
		close_file(to);
	}
	return (0);
}
