#include "main.h"

/**
 * _strstr - function that locates substring
 * @haystack:input string
 * @needle:string to be checked
 * Return:returns 0 at the end
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
