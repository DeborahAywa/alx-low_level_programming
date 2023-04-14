#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check string for digit
 * @str:array of string
 *
 * Return:returns 0 on success
 */
int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - program that adds positive numbers
 * @argc:number of arguments
 * @argv:array of arguments
 *
 * Return:return 0 on success
 */
int main(int argc, char *argv[])
{
	int p;
	int str_to_int;
	int add = 0;

	p = 1;
	while (p < argc)
	{
		if (check_num(argv[p]))
		{
			str_to_int = atoi(argv[p]);
			add += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		p++;
	}
	printf("%d\n", add);
	return (0);
}
