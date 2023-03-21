#include "main.h"

/**
 * print_to_98-function prinyting natural numbers to 98
 *
 * @n:parameter to be checked
 *
 */

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				_putchar(i + '0');
			else if (i == 98)
				_putchar(i + '0');
		}
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				_putchar(j + '0');
			else if (j == 98)
				_putchar(j + '0');
		}
	}
}
