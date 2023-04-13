#include "main.h"
#include <stdlib.h>

/**
 * _set - function to set memory with constant byte
 * @s:memory area to be filled
 * @b:constant to be filled in the memory area
 * @n:number of bytes to be filled
 *
 * Return:pointer to the memory area s
 */

char *_set(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory of
 * an array nmemb
 * @size:size of each element
 * Description for nmemb
 * Description for size
 * @nmemb:array
 *
 * Return:pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(size * nmemb);
	if (str == NULL)
	{
		return (NULL);
	}
	_set(str, 0, (nmemb * size));
	return (str);
}
