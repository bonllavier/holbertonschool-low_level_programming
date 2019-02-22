#include<stdio.h>
#include "holberton.h"
/**
 *cap_string - compare to strings.
 *@c: value to be evaluate.
 *Return: not.
 */
char *cap_string(char *c)
{
int l, x, y  = 0;
char comp[4] = {46, 10, '\t', 32};
while (*(c + l) != '\0')
{
l++;
}
for (x = 0 ; x < l ; x++)
{
if ((int)c[x] >= 97 && (int)c[x] <= 122 && x == 0)
{
c[x] = (char)((int)c[x] - 32);
}
if (c[x] == comp[0] || c[x] == comp[1] || c[x] == comp[2] || c[x] == comp[3])
{
y = (x + 1);
if ((int)c[y] >= 97 && (int)c[y] <= 122)
{
c[y] = (char)((int)c[y] - 32);
}
}
}
return (c);
}
