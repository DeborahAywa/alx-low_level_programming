#include "main.h"

/**
 * get_endianness - function that checks for
 * endianness of a machine
 *
 * Return:0 for big endian and 1 for little
 * endian
 */

int get_endianness(void)
{
	unsigned int p = 1;
	char *c = (char *) &p;

	return (*c);
}
