#include "holberton.h"
#include  <stdio.h>
/**
 *main - 13 get multiples of number.
 *
 *Return: not.
 */
int main(void)
{
long int n = 1024;
long int x;
long int s = 0;
for (x = 1 ; x < n ; x++)
{
if ((x % 3) == 0 || (x % 5) == 0)
{
s = x + s;
}
}
printf("%ld\n", s);
return (0);
}
