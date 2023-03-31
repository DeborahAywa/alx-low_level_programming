#include "main.h"

/**
 * _strncat-function that concatenates 2 strings
 * with n bytes
 *
 * @dest:destination of string
 * @src:source of string
 * @n:max bytes from src
 *
 * Return:return dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int p;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	for (p = 0; p < n; p++)
	{
		dest[i + 1] = src[j];
	}
	return (dest);
}
