#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a two dimensional array function
 * @width: width of a two domensional array
 * @height: height of a two dimensional array
 * Return: return null if failure or width and height is 0
 */

int **alloc_grid(int width, int height)
{
	int **arr, col, row;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (col = 0; col < height; col++)
	{
		arr[col] = malloc(sizeof(int) * width);

		if (arr[col] == NULL)
		{
			for (; col >= 0; col--)
				free(arr[col]);

			free(arr);
			return (NULL);
		}
	}

	for (col = 0; col < height; col++)
	{
		for (row = 0; row < width; row++)
			arr[col][row] = 0;
	}

	return (arr);
}
