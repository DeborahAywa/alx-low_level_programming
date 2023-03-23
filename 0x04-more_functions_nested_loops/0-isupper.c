#include "main.h"

/**
 * _isupper- function to check if alphabet is uppper case
 *
 * @c:the parameter to be checked
 *
 * Return:returns 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
