#include "main.h"

/**
 * print_binary - function that prints the binary
 * representation of a number
 *
 * @n:number to print in binary
 */

void print_binary(unsigned long int n)
{
	int p, count = 0;
	unsigned long int result;

	for (p = 63; p >= 0; p--)
	{
		result = n >> p;
		if (result & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
