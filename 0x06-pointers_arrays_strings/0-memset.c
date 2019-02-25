#include<stdio.h>
#include "holberton.h"
/**
 *_memset - replace values until n.
 *@s: value to be evaluate.
 *@b: value to be evaluate.
 *@n: value to be evaluate.
 *Return: not.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0 ; x < n ; x++)
{
s[x] = b;
}
return (s);
}
