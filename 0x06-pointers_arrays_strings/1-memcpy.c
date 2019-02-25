#include<stdio.h>
#include "holberton.h"
/**
 *_memcpy - copies memory area.
 *@dest: value to be evaluate.
 *@src: value to be evaluate.
 *@n: value to be evaluate.
 *Return: not.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
for (x = 0 ; x < n ; x++)
{
dest[x] = src[x];
}
return (dest);
}
