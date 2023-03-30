#include "main.h"

/**
 *string_toupper-function that capitalizes string
 *@str:string to be capitalized
 *
 *Return:returns string str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		return (str);
	}
	return (str);
}

