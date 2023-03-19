#include <stdio.h>

/**
 * main-main function
 *
 * Return:ends program with 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
