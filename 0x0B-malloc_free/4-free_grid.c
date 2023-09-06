#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - dimentional grid freezed to two
 * @grid: entry grid
 * @height: enter the height of the grid
 */

void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
		free(grid[c]);
	free(grid);
}
