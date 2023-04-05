#include "main.h"

/**
 * prime - calculates if a number is prime or not
 *
 * @n:the number to be checked
 * @i:iterator
 * Return:returns 1 if n is prime and 0 otherwise
 */

int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if ((n % i) == 0 && i > 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}

/**
 * is_prime_number -function checks if an integer
 * is a prime number
 *
 * @n:number to be evaluated
 * Return:1 if n is a prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}

