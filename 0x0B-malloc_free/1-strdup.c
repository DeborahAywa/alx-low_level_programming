#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to
 * a new string which is a duplicate of string str
 *
 * @str:string
 *
 * Return:pointer to duplicate string
 *
 */

char *_strdup(char *str)
{
	char *s;
	int p = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[p] != '\0')
	{
		p++;
	}
	s = malloc(sizeof(char) * (p + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (p = 0; str[p]; p++)
	{
		s[p] = str[p];
	}
	return (s);
}
