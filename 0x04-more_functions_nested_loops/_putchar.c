#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to the standard output
 * @c:the character to print
 *
 * Return:returns 1 on success and 0 for error
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
