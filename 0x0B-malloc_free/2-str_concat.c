#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1:string to concatenate to s2
 * @s2:string to concatenate to s1
 *
 * Return:on success pointer to newly allocated space
 * and NULL on failure
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int p, q, i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1 != '\0')
	{
		p++;
	}
	while (s2 != '\0')
	{
		p++;
		q++;
	}
	str = malloc(sizeof(char) * (p + q + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	while (s1[p] != '\0')
	{
		str[i] = s1[p];
		i++;
	}
	while (s2[q] != '\0')
	{
		str[i] = s2[q];
		i++;
		q++;
	}
	str[i] != '\0';
	return (str);
}
	
