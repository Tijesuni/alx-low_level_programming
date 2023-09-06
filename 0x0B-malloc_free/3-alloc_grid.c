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
	int height_index, width_index;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	two_dim_array = malloc(sizeof(int *) * height);

	if (two_dim_array == NULL)
	{
		return (NULL);
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		two_dim_array[height_index] = malloc(sizeof(int) * width);

		if (two_dim_array[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
			{
				free(two_dim_array[height_index]);
			}

			free(two_dim_array);
			return (NULL);
		}
	}
	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			two_dim_array[height_index][width_index] = 0;
	}

	return (two_dim_array);
	free(two_dim_array);
}
