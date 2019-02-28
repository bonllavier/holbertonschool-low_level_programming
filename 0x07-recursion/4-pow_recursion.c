#include "holberton.h"
/**
 *_pow_recursion - print with recurssion.
 *@x: value to be evaluate.
 *@y: value.
 *Return: int.
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
if (y == 1)
return (x);
if (y < 0)
return (-1);
return (x * _pow_recursion(x, --y));
}
