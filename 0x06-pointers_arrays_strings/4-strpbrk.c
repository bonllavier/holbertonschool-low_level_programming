#include<stdio.h>
#include "holberton.h"
/**
 *_strpbrk - search set bytes.
 *@s: value to be evaluate.
 *@accept: value to be evaluate.
 *Return: char.
 */
char *_strpbrk(char *s, char *accept)
{
int x, y, z;
for (x = 0 ; *(s + x) != '\0' ; x++)
{
for (y = 0 ; *(accept + y) != '\0' ; y++)
{
if (accept[y] == s[x])
{
return (s + x);
}
}
}
for (z = 0 ; *(accept + z) != '\0' ; z++)
{
if (accept[z] == s[x])
{
return (s + x);
}
}
return (NULL);
}
