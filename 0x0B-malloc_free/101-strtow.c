#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - number of dimensional grig to be freezed
 * @grid: entry grid
 * @height: entry height
 */

void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
		free(grid[c]);
	free(grid);
}
