#include "holberton.h"
/**
 *print_triangle - prints a triangle.
 *@size: varaible to evaluate.
 *Return: not.
 */
void print_triangle(int size)
{
int c;
int x;
if (size > 0)
{
for (c = 1 ; c <= size; c++)
{
if (size != 0)
{
for (x = 1 ; x <= size ; x++)
{
if (x >= (size - (c - 1)))
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
else
{
_putchar('\n');
}
}
