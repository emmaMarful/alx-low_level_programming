#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: grid
 * @height: height of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
