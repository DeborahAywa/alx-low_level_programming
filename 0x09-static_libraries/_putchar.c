#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 *
 * @c:character to print
 *
 * Return:1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
