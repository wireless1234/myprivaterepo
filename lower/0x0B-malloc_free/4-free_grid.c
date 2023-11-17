#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - free up grid allocated
 *@grid: pointer to pointer
 *@height: rows
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
