#include<stdio.h>
#include "holberton.h"
/**
 *_strchr - locate character.
 *@s: value to be evaluate.
 *@c: value to be evaluate.
 *Return: char.
 */
char *_strchr(char *s, char c)
{
int x;
for (x = 0 ; *(s + x) != '\0' ; x++)
{
if (s[x] == c)
{
return (s + x);
}
}
s = NULL;
return (s);
}
