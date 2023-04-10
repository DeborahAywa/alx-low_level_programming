#include "main.h"

/**
 ** _strcpy-function that copies the string pointed\
 * by src including (\0) to buffer pointed by dest
 * @dest:destination of the string
 * @src:string to be copied
 *
 * Return:return copied string
 */

char *_strcpy(char *dest, char *src)
{
	int length;
	int i;

	while (*src)
	{
		src++;
		length++;
	}
	for (i = 0; i < length; i++)
		src--;
	for (i = 0; i < length; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = *src;

	return (dest);
}
