#include<stdio.h>
#include "holberton.h"
/**
 *string_toupper - compare to strings.
 *@c: value to be evaluate.
 *Return: not.
 */
char *string_toupper(char *c)
{
int l = 0;
int x = 0;
while (*(c + l) != '\0')
{
l++;
}
for (x = 0 ; x < l ; x++)
{
if ((int)c[x] >= 97 && (int)c[x] <= 122)
{
c[x] = (int)c[x] - 32;
}
}
return (c);
}
