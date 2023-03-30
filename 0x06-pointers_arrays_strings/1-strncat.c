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

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + 1] = src[j];
	}
	while (dest[i] != '\0')
	{
		return (dest);
	}
	return (dest);
}
