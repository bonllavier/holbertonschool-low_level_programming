#include "holberton.h"
#include<stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - return 2d array
 *@width: string to copy.
 *@height: height.
 *Return: int.
 */
int **alloc_grid(int width, int height)
{
int i, y;
int **ptr;
ptr = malloc(height * sizeof(*ptr));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0 ; i < height ; i++)
{
ptr[i] = malloc(width * sizeof(*ptr));
if (ptr[i] == NULL)
{
return (NULL);
}
for (y = 0 ; y < width ; y++)
{
ptr[i][y] = 0;
}
}
return (ptr);
}
