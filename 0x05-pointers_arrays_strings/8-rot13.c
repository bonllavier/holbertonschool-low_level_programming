#include<stdio.h>
#include "holberton.h"
/**
 *rot13 - encode.
 *@c: value to be evaluate.
 *Return: not.
 */
char *rot13(char *c)
{
int x;
int y;
int u;
char *char1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *char2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (x = 0 ; *(c + x) != '\0'; x++)
{
u = 0;
for (y = 0 ; char1[y] != '\0' && u == 0 ; y++)
{
if (c[x] == char1[y])
{
c[x] = char2[y];
u = 1;
}
}
}
return (c);
}
