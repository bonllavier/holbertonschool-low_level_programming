#include "holberton.h"
#include  <stdio.h>
/**
 *main - 13 get multiples of number.
 *
 *Return: not.
 */
int main(void)
{
int n = 1024;
int x;
int s = 0;
for (x = 1 ; x < n ; x++)
{
if ((x % 3) == 0)
{
s = x + s;
}
if ((x % 5) == 0)
{
s = x + s;
}
}
printf("%d\n", s);
return (0);
}
