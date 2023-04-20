#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum
 * of all it's parameters
 * @n:the number of parameters to be passed
 * @...:variable number of parameters
 * Return:if n == 0 return 0 otherwise the sum
 * of the parameters passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list count;
	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(count, n);
	for (i = 0; i < count; i++)
	{
		sum += va_arg(count, int);
	}
	va_end(count);
	return (sum);
}
