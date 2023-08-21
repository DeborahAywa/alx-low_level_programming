#include "main.h"

/**
 * _strlen-function to return the length
 * @s:string to be counted
 *
 * Return:returns length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
