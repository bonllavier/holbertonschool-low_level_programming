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
unsigned long int z = 1;
unsigned long int y = 2;
unsigned long int res;
printf("%lu", z);
printf(", ");
printf("%lu", y);
printf(", ");
for (x = 3; x <= 50 ; x++)
{
res = y + z;
printf("%lu", res);
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
