#include "holberton.h"
/**
 *print_times_table - prints the n times table.
 *@n: varaible to be evaluate.
 *Return: not.
 */
void print_times_table(int n)
{
int x = 0;
int y = 0;
if (n < 15)
{
for (y = 0; y <= n; y++)
{
for (x = 0; x <= n; x++)
{
if ((x * y) <= 99 && x != 0)
{
_putchar (' ');
}
else if (x > 0)
{
_putchar (((x * y) / 100) % 10 + '0');
}
if ((x * y) <= 9 && x != 0)
{
_putchar (' ');
}
else if (x > 0)
{
_putchar (((x * y) / 10) % 10 + '0');
}
_putchar ((x * y) % 10 + '0');
if (x < n)
{
_putchar (',');
_putchar (' ');
}
}
_putchar ('\n');
}
}
}
