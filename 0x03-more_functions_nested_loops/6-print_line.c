#include "holberton.h"
/**
 *print_line - draws a straight line in the terminal
 *@n: value to be evaluate
 *Return: Always 0.
 */
void print_line(int n)
{
int c;
if (n > 0)
{
for (c = 1 ; c <= n; c++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
