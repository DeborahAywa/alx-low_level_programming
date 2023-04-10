#include "main.h"

/**
 * _isalpha-function to check alphabet
 *
 * @c:parameter to be checked
 *
 * Return:1 on success and 0 on failure
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
