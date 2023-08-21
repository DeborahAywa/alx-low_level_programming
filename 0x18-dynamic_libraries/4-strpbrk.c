#include "main.h"

/**
 * _strpbrk - function looking for set of byte
 * @s:input string
 * @accept:string to compare
 * Return:return 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
