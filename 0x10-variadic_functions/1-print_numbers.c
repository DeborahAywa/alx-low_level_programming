#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * followed by a new line
 * @separator:string to be printed between numbers
 * @n:the number of functions to be passed to the
 * function
 * @...:a variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int p;

	va_start(list, n);

	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(list, int));
		if (p != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
