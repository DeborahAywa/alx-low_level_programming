#include "main.h"

/**
 * print_alphabet_x10 - function for the alphabet 10 times in lower case
 *
 */
void print_alphabet_x10(void)
{
	int p;
	char k;

	for (p = 1; p <= 10; p++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
		_putchar('\n');
	}
}
