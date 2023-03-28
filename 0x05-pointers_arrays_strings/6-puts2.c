#include "main.h"

/**
 * puts2-function prints every other character of string
 *
 * @str:string to be printed
 *
 */

void puts2(char *str)
{
	int i;
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}
	for (i = 0; i < length; i++)
		str--;
	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
