#include "holberton.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *
 *Return: not.
 */
void times_table(void)
{
int x = 0;
int y = 0;
for (y = 0 ; y <= 9 ; y++)
{
for (x = 0 ; x <= 9 ; x++)
{
if ((x * y) <= 9 && x != 0)
{
_putchar(' ');
}
else if (x > 0)
{
_putchar(((x * y) / 10) % 10 + '0');
}
_putchar((x * y) % 10 + '0');
if (x != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
