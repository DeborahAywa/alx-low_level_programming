#include "main.h"

/**
 * positive_or_negative - function tests if number is positive or negative
 *
 * @i:the parameter to be chaecked
 *
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
