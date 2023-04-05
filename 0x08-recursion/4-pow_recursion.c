#include "main.h"

/**
 * _pow_recursion - function that returns power
 *
 * @x:value to raise or base
 * @y:power to raise base
 *
 * Return:returns the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
