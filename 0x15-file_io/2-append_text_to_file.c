#include "main.h"

/**
 * append_text_to_file - function that appends
 * text at the end of a file
 *
 * @filename:name of the file for text to be
 * appended
 * @text_content:NULL terminated string to add
 * at the end of the file
 *
 * Return:1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fptr, w, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
		for (length = 0; text_content[length];)
		{
			length++;
		}
	fptr = open(filename, O_WRONLY | O_APPEND);
	w = write(fptr, text_content, length);
	if (fptr == -1 || w == -1)
	{
		return (-1);
	}

	close(fptr);
	return (1);
}
