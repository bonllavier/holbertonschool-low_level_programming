#include "holberton.h"
#include<stdio.h>
#include <stdlib.h>
/**
 *array_range - allocated men for array.
 *@min: string to copy.
 *@max: dest.
 *Return: int.
 */
int *array_range(int min, int max)
{
int *ptr;
unsigned int i = 0;
unsigned int tam;
if (min > max)
{
return (NULL);
}
tam = max - min;
ptr = malloc((tam + 1) * sizeof(*ptr));
if (ptr == NULL || ptr == 0)
{
return (NULL);
}
for ( ; min <= max; min++, i++)
{
ptr[i] = min;
}
return (ptr);
}
