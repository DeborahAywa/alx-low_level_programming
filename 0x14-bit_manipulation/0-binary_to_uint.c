#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned integer
 *
 * @b:pointer to a string of characters of 0's & 1's
 * Return:the converted number or 0 if b is NULL or
 * if not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		else
		{
			res =  2 * res + (b[i] - '0');
		}
	}
	return (res);
}
