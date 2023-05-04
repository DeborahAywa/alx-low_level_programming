#include "main.h"

/**
 * set_bit - function that sets the value of
 * a bit to 1 at a given index
 * @n:pointer to the number to change
 * @index:indexof the bit to set to 1
 *
 * Return:1 on success and -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = ((1UL << index) | *n);
		return (1);
	}
}