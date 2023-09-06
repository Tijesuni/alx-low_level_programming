#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a
 *              two-dimensional array of integers
 * @width: The number of rows
 * @height: The number of columns
 * Return: A pointer, or NULL
 */

int **alloc_grid(int width, int height)
{
	int **two_dim_array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	two_dim_array = malloc(sizeof(int *) * height);

	if (two_dim_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		two_dim_array[i] = malloc(sizeof(int *) * width);

		if (two_dim_array[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(two_dim_array[i]);
			}
			free(two_dim_array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			two_dim_array[i][j] = 0;
	}

	return (two_dim_array);
	free(two_dim_array);

}
