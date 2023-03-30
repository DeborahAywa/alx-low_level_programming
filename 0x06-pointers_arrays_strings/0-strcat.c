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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
