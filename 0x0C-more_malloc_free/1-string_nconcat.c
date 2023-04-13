#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @n:bytes of string s2 to concatenate
 * Description of s1:string to append to
 * Description of s2:string to concatenate from
 * Return:pointer to newly allocated space in memory
 * containing s1 and the n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, s1len = 0, s2len = 0;

	while (s1 && s1[s1len])
	{
		s1len++;
	}
	while (s2 && s2[s2len])
	{
		s2len++;
	}
	if (n < s2len)
	{
		s = malloc(sizeof(char) * (s1len + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (s1len + s2len + 1));
	}
	if (!s)
	{
		return (NULL);
	}
	for (; i < s1len; i++)
	{
		s[i] = s1[i];
	}
	while (n < s2len && i < (s1len + n))
	{
		s[i++] = s2[j++];
	}
	while (n >= s2len && i < (s1len + s2len))
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}
