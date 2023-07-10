#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename:name of file to create
 * @text_content:NULL terminated string to write
 * to file
 * Return:1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fptr, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	fptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fptr, text_content, length);

	if (fptr == -1 || w == -1)
		return (-1);

	close(fptr);
	return (1);
}
