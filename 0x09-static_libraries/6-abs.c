#include "main.h"
#include <stdio.h>

/**
 * _abs - function to print absolute value
 *
 * @n:parameter to be checked
 *
 * Return:returns n at end of program
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else
		n = n;
	return (n);
}
