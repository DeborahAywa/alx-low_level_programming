#include "main.h"
#include <stdio.h>

/**
 * print_array-function that prints n elements of an array
 *
 * @a:array name
 *
 * @n:number of elements of the array a
 */

void print_array(int *a, int n)
{
	int length = 0;

	while (length < n)
	{
		printf("%d", a[length]);

		if (length != (n - 1))
			printf(", ");
		length++;
	}
	_putchar('\n');
}
