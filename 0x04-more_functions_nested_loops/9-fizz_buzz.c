#include <stdio.h>
#include "main.h"

/**
 * main-function that prints numbers from 1 to 100
 * multiples of 3 return Fizz,multiples of 5 return Buzz
 * multiples of both 3 and 5 FizzBuzz
 *
 * Return: returns 0 at the end of program
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
