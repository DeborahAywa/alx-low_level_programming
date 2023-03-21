#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function prints last digit
 *
 * @j:parameter to be checked
 *
 * Return: returns the last digit k
 */
int print_last_digit(int j)
{
	int k;

	k = j % 10;
	if (j < 0)
		k = -(k);
	_putchar(k + '0');
	return (k);
}
