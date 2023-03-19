#include<stdio.h>

/**
 * main -main function
 *
 * Return: returns 0 at the end of a program
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		if (x != 'q' && x != 'e')
			printf(x);
	printf('\n');
	return (0);
}
