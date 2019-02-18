#include "holberton.h"
#include <stdio.h>
/**
 * main - print 98 fibbonaci.
 *
 * Return: Always 0.
 */
int main(void)
{
int x;
long int z = 1;
long int y = 2;
long int res;
for (x = 1; x <= 98 ; x++)
{
if (x < 2)
{
printf("%ld", z);
printf(", ");
printf("%ld", y);
printf(", ");
}
res = y + z;
printf("%ld", res);
if (x != 98)
{
printf(", ");
}
z = y;
y = res;
}
putchar('\n');
return (0);
}
