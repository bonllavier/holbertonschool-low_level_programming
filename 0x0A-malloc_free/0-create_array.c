#include "holberton.h"
#include<stdio.h>
#include <stdlib.h>
/**
 *create_array - print with recurssion.
 *@size: size.
 *@c: letter.
 *Return: char.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
if (size == 0)
{
return (NULL);
}
ptr = malloc(size * sizeof(size));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0 ; i < size ; i++)
{
ptr[i] = c;
}
return (ptr);
}
