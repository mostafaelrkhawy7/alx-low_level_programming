#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height
 * Description: frees memory
 * Return: void
 */
void free_grid(int **grid, int height)
{
    int f;
	
	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
