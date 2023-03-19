#include <stdio.h>

/**
 * main-main function
 *
 * Return:program returns to 0
 */

int main(void)
{
	int i;
	char p;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (p = 'a'; p <= 'f'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
