#include "main.h"

/**
 * _isdigit - functions that checks for a digit
 *
 * @c:parameter to be checked
 *
 * Return:returns 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
