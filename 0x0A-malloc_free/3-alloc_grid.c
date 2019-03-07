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
if (width < 1)
{
return (NULL);
}
if (height < 1)
{
return (NULL);
}
ptr = malloc(height * sizeof(*ptr));
if (ptr == NULL || ptr == 0)
{
free(ptr);
return (NULL);
}
for (i = 0 ; i < height ; i++)
{
ptr[i] = malloc(width * sizeof(*ptr));
if (ptr[i] == NULL || ptr[i] == 0)
{
for (; i >= 0 ; i--)
{
free(ptr[i]);
}
free(ptr);
return (NULL);
}
}
for (i = 0 ; i < height ; i++)
{
for (y = 0 ; y < width ; y++)
{
ptr[i][y] = 0;
}
}
return (ptr);
}
