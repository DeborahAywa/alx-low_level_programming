#include "main.h"

/**
 * factorial - function to compute factorial of a number
 *
 * @n:the integer
 *
 * Return:return factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
