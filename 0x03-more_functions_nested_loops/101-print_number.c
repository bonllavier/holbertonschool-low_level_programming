#include "holberton.h"
/**
 *print_number - prints an integer.
 *@n: varaible to be evaluate.
 *Return: not.
 */
void print_number(int n)
{
int x = n;
if (n < 0)
{
x = -n;
_putchar('-');
}
if (x > 999)
{
_putchar((x / 1000) % 10 + '0');
}
if (x > 99)
{
_putchar((x / 100) % 10 + '0');
}
if (x > 9)
{
_putchar((x / 10) % 10 + '0');
}
_putchar((x % 10) + '0');
}
