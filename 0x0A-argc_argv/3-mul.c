#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that converts string to integer
 * @str:string to be converted
 *
 * Return:return the integer converted from string
 */

int _atoi(char *str)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	while (i < len && f == 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - '0';
			if (d % 2)
			{
				digit = -digit;
			}
			n = n * 10 + digit;
			f = 1;
			if (str[i + 1] < '0' || str[i + 1] > '9')
			{
				break;
			}
			f = 0;
		}
		i++;
	}
	if (f == 0)
	{
		return (0);
	}
	return (n);
}

/**
 * main - program that multiplies two numbers
 * @argc:number of arguments
 * @argv:array of arguments
 *
 * Return:return 0 on success and 1 on error
 */
int main(int argc, char *argv[])
{
	int product, x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Errror\n");
		return (1);
	}
	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	product = x * y;
	printf("%d\n", product);
	return (0);
}
