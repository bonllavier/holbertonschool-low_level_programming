#include "holberton.h"
#include<stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - return 2d array
 *@b: string to copy.
 *Return: not.
 */
void *malloc_checked(unsigned int b)
{
char *ptr;
ptr = malloc(b);
if (ptr == NULL || ptr == 0)
{
exit(98);
}
return (ptr);
}
