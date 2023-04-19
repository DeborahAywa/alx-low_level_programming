#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that returns an index
 * of the first element for which cmp function
 * does not return 0
 * @array:array
 * @size:size of the array
 * @cmp:pointer to the function to be used to
 * compare values
 * Return:if size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
		{
			return (p);
		}
	}
	return (-1);
}
