#include "main.h"

/**
 * *_strcat-function that concatenates string/
 * src to dest /
 *
 * @dest:the destination where src is to be /
 * appended
 *
 * @src:the string to be appended
 *
 * Return:a pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = 0;
	int len2 = 0;

	while (dest[i] != '\0')
	{
		len1++;
		i++;
	}

	while (src[i] != '\0')
	{
		len2++;
		i++;
	}

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
