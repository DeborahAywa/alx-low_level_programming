#include "main.h"

/**
 * _strcmp-function to compare two strings
 * @s1:string to compare to s2
 * @s2:string to compare to s1
 * Return:end program with 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int flag = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		return (s1[i] != s2[i]);
	}
	else
	{
		return (s1[i] = s2[i]);
	}
	return (0);
}
