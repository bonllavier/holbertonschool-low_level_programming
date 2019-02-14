#include "holberton.h"
/**
 *print_number - prints an integer.
 *@n: varaible to be evaluate.
 *Return: not.
 */
void print_number(int n)
{
if (n < 0)
{
n = -n;
_putchar('-');
}
if (n > 999)
{
_putchar((n / 1000) % 10 + '0');
}
if (n > 99)
{
_putchar((n / 100) % 10 + '0');
}
if (n > 9)
{
_putchar((n / 10) % 10 + '0');
}
_putchar((n % 10) % 10 + '0');
}
