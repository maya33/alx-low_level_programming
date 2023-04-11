#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  function that frees a 2 dimensional grid 
 *@grid: rows of elements
 *@height: columns of strings
 * Return: 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
