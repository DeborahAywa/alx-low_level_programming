#include "main.h"

/**
 * clear_bit - function that sets the value of a bit
 * to 0 at a given index
 *
 * @n:pointer to the number to change
 * @index:index of the bit to set to 0
 *
 * Return: return 1 on succes and -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = (~(1UL << index) & *n);
		return (1);
	}
}
