#include<stdio.h>
#include "holberton.h"
/**
 *_strncpy - length string.
 *@dest: value to be evaluate.
 *@src: value to be evaluate.
 *@n: value to be evaluate.
 *Return: not.
 */
char *_strncpy(char *dest, char *src, int n)
{
int l = 0;
int x = 0;
while (*(dest + l) != '\0')
{
l++;
}
l = l - 1;
for (x = 0 ; x < n ; x++)
{
dest[x] = src[x];
}
dest[l + 1] = '\0';
return (dest);
}
