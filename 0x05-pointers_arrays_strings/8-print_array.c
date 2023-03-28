#include "main.h"

/**
 * print_array-function that prints n elements of an array
 *
 * @a:array name
 *
 * @n:number of elements of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		_putchar("%d + '0'", a[i]);
		_putchar('\n');
	}
	if (i == (n - 1))
	{
		_putchar("%d + '0'", a[n - 1]);
		_putchar('\n');
	}
}
