#include "main.h"

/**
 * natural_sqrt - function to find the natural
 * square root of a number
 *
 * @n:number to be evaluated
 * @i:iterator
 * Return:return the square root of n
 */

int natural_sqrt(int n, int i)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	return (natural_sqrt(n, (i + 1)));
}

/**
 * _sqrt_recursion - function to return
 * the natural square root of a number
 *
 * @n:the number to be evaluated
 * Return:the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (natural_sqrt(n, 0));
}

