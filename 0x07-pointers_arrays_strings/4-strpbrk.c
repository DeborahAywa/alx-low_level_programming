#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function looking for set of byte
 * @s:input string
 * @accept:string to compare
 * Return:return 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
