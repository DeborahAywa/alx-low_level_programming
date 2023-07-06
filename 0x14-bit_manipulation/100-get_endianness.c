#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * of a machine
 *
 * Return:0 for a big endian and 1 for a little endian
 */

int get_endianness(void)
{
	unsigned int p = 1;
	char *c = (char *) &p;

	return (*c);
}
