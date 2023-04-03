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
	int i, j;
	int len1;
	int len2;

	while (s[i] != '\0')
	{
		len1++;
		i++;
	}
	while (s[j] != '\0')
	{
		len2++;
		j++;
	}
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == *s)
			{
				len1++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (len1);
		}
		i++;
	}
	return (len1++);
}
