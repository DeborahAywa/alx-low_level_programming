#include "main.h"

/**
 * _memset-function that fills the first n bytes
 * @b:the constant to fill the first n bytes
 * @n:bytes of the memory area
 * @s:memory area s
 * Return:returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
