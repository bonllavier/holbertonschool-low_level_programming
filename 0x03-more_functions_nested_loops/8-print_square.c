#include "holberton.h"
/**
 *print_square - prints a square
 *@size: to be evaluate.
 *Return: not.
 */
void print_square(int size)
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
_putchar('#');
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
