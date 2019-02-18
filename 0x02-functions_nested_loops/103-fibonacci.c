#include "holberton.h"
#include "stdio.h"
/**
 *main - fibonacci.
 *
 *Return: not.
 */
int main(void)
{
long int z = 1;
long int y = 2;
long int res = 0;
long int res2 = 0;
int t = 1;
long int maxI = 4000000;
while (t)
{
res = y + z;
if (res < maxI)
{
z = y;
y = res;
res2 = res2 + res;
}
else
{
t = 0;
}
}
printf("%ld\n", res2 + 2);
return (0);
}
