#include "holberton.h"
#include "stdio.h"
/**
 *main - fibonacci.
 *
 *Return: not.
 */
int main(void)
{
unsigned long int z = 1;
unsigned long int y = 2;
unsigned long int res = 0;
unsigned long int res2 = 0;
int t = 1;
unsigned long int maxI = 4000000;
while (t)
{
res = z + y;
if (res < maxI)
{
z = y;
y = res;
if (res % 2 == 0)
{
res2 = res2 + res;
}
}
else
{
break;
}
}
res2 = res2 + 2;
printf("%ld\n", res2);
return (0);
}
