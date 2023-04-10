#include "main.h"

/**
 * _strncpy-function that copies a string
 *
 * @dest:string that src is copied to
 *
 * @src:string that is to be copied
 *
 * @n:maximum number of bytes to be copied
 *
 * Return:return dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
