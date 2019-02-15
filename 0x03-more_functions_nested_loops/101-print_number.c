#include "holberton.h"
/**
 *print_number - prints an integer.
 *@n: varaible to be evaluate.
 *Return: not.
 */
void print_number(int n)
{
int x;
if (n < 0)
{
x = -n;
_putchar('-');
}
else
{
x = n;
}
if ((x / 10) > 0)
{
print_number(x / 10);
}
_putchar((x % 10) + '0');
}
