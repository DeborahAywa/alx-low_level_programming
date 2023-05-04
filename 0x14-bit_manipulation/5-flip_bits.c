#include "main.h"

/**
 * flip_bits - function that returns the number
 * of bits you need to flip to get from one
 * number to another
 *
 * @n:first number
 * @m:second number
 *
 * Return:number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, count = 0;
	unsigned long int n1;
	unsigned long int n2 = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		n1 = n2 >> p;
		if (n1 & 1)
		{
			count++;
		}
	}
	return (count);
}
