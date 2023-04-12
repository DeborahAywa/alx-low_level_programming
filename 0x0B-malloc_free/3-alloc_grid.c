#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function to a 2 dimensional array of integers
 *
 * @width:width input
 * @height:height input
 *
 * Return:pointer to two dimensional array
 *
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int p, q = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(int*) * height);
	if (s == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < height; p++)
	{
		s[p] = malloc(sizeof(int) * width);
	}
	if (s[p] == NULL)
	{
		for (; p >= 0; p--)
			free(s[p]);
		free(s);
		return (NULL);
	}
	for (p = 0; p < height; p++)
	{
		for (q = 0; q < width; q++)
		{
			s[p][q] = 0;
		}
	}
	return (s);
}
