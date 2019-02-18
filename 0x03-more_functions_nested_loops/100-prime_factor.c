#include<stdio.h>
/**
 *main - 11 get prime factors.
 *
 *Return: not.
 */
int main(void)
{
long int num = 612852475143;
long int divn;
for (divn = 2 ; num > 1 ; divn++)
{
if (num % divn == 0)
{
while (num % divn == 0)
{
num = num / divn;
}
}
}
printf("%ld\n", divn);
return (0);
}
