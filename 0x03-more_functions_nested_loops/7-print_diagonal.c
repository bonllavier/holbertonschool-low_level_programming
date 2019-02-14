#include "holberton.h"
/**
 *print_diagonal - draws a diagonal line
 *@n: variable to be evaluate.
 *Return: not.
 */
void print_diagonal(int n)
{
int c;
int x;
if (n > 0)
{
for (c = 1 ; c <= n; c++)
{
if (n != 0)
{
for (x = 1 ; x <= c ; x++)
{
if (c != x)
{
putchar(' ');
}
else if (c == x)
{
putchar('\\');
putchar('\n');
}
}
}
}
}
else
{
putchar('\n');
}
}
