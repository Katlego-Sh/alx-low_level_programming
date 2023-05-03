#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - functions to free two dimentional array
 * @grid: 2 dimensional grid
 * @height: height dimention of the gird
 * Description: the memory of the grid will be freed
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
