#include "holberton.h"
#include <stdio.h>
/**
 *main - prints fibbonaci.
 *
 *Return: not.
 */
int main(void)
{
int x;
long int z = 1;
long int y = 2;
long int res;
for (x = 1; x <= 50 ; x++)
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
if (x != 50)
{
printf(", ");
}
z = y;
y = res;
}
putchar('\n');
return (0);
}
