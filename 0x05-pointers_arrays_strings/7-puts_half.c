#include "main.h"

/**
 * puts_half-function that prints half a string
 *
 * @str:string to be checked
 *
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (*str)
	{
		length++;
		str++;
	}
	for (i = 0; i < length; i++)
		str--;
	i = (length % 2 == 0) ? length / 2 : (length + 1) / 2;
	for (; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
