#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b:number of bytes to be allocated
 * Return:pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
