#include "main.h"
#include <stdio.h>

/**
 * main - functions that prints the number of
 * arguments passed to it
 *
 * @argc:the number of arguments
 * @argv:array of arguments
 *
 * Return:returns 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
