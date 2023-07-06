#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * at a given index
 *
 * @n:number to search
 * @index:index of bit
 * Return:value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		value = (n >> index) & 1;
	}
	return (value);
}
