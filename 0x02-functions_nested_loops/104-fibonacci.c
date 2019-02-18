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
printf("%lu", z);
printf(", ");
printf("%lu", y);
printf(", ");
for (x = 1; x <= 98 ; x++)
{
res = y + z;
printf("%lu", res);
if (x != 98)
{
printf(", ");
}
z = y;
y = res;
}
printf("\n");
return (0);
}
