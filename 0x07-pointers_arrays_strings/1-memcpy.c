#include "main.h"

/*
 * _memcpy - function to copy n bytes from src to dest
 * @dest:destination of data from src
 * @src:memory area to be copied
 * @n:the first n bytes to be filled at dest
 * Return:return dest memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
