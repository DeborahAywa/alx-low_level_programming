#include "main.h"

/**
 * _strspn - function to get length of prefix
 *
 * @s:initial string
 * @accept:string to compare to string s
 * Return:returns 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int p;
	unsigned int length = 0;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				length++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (length);
		}
		s++;
	}
	return (length);
}
