#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *free_grid - free array.
 *@grid: value to be evaluate.
 *@height: value to be evaluate.
 *Return: not.
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0 ; i < height ; i++)
{
free(grid[i]);
}
free(grid);
}
