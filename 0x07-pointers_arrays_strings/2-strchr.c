#include "main.h"

/**
 * _strchr - function that locates a character
 *
 * @s:the string
 * @c:the character
 * Return:pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
