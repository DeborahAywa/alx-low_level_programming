#include "main.h"

/**
 * _strlen_recursion - function to print string length
 *
 * @s:string to be printed
 *
 * Return:returns the length of a string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (length);
	}
	else
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}
